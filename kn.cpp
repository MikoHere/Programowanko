#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

long minimumZPliku(string nazwaPliku, int system)
{
  long min;
  ifstream plik;
  string liczba1, liczba2;
  long liczba;
  
  char* endptr;
  bool pierwszy=true;
  plik.open(nazwaPliku.c_str());
   if(plik.good())  //sprawdzenie czy plik istnieje
     while(!plik.eof())        //petla wykonuje sie az program dojedzie do konca pliku
     {
               plik>>liczba1 >> liczba2;   // wczyta dwie liczby z pliku (w wierszu) do 2 stringów
               liczba =  strtol(liczba2.c_str(), &endptr, system);
               cout<< liczba1;
               //^konwersja z systemu czworkowego do dziesietnego, string (C++) trzeba zamieniæ na char * (C) funkcja .c_str()
               //zmienna endptr wskazuje na znak w stringu, który nie pasuje do systemu czwórkowego - tu niesprawdzone, bo zak³adamy, ¿e dane s¹ poprawne!
               if(pierwszy) //jeœli to pierwsza liczba z pliku - bêdzie nowym MINIMUM
               {
                            min = liczba;
                            pierwszy = false;
               }
               else //jeœli to kolejna liczba z pliku...
                  if(liczba < min) //... i jest mniejsza od dotychczasowego minimum...
                       min = liczba; // ... to nadpisz min
     }//eof()
  return min;
}

int main()
{
	ofstream plikOut;
	plikOut.open("wyjscie.txt");
  long min1 = minimumZPliku("dane_systemy1.txt", 2);
  long min3 = minimumZPliku("dane_systemy3.txt", 8); 
  long min2 = minimumZPliku("dane_systemy2.txt", 4);
  plikOut << "Plik pierwszy min:" << min1  <<"\n";
    plikOut << "Plik drugi min:" << min2  <<"\n";
      plikOut << "Plik trzeci min:" << min3  <<"\n";
      plikOut.close();
}
