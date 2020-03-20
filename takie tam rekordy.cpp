#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;


struct osoba {
    string imie;
    string nazwisko;
    string klasa;
    double srednia;
    int wiek;
};

int main()
{
    osoba uczniowie[3]; 

    for (int i = 0; i<3; i++)
    {
        
        cout << "Podaj imie ucznia numer " << i+1 << endl;
        cin >> uczniowie[i].imie;
    }
    
    for (int i = 0; i<3; i++)
    {
        
        cout << "Podaj nazwisko ucznia numer " << i+1 << endl;
        cin >> uczniowie[i].nazwisko;
    }
    
    for (int i = 0; i<3; i++)
    {
        
        cout << "Podaj klase ucznia numer " << i+1 << endl;
        cin >> uczniowie[i].klasa;
    }
    
    for (int i = 0; i<3; i++)
    {
        
        cout << "Podaj srednia ucznia numer " << i+1 << endl;
        cin >> uczniowie[i].srednia;
    }
    
    for (int i = 0; i<3; i++)
    {
        
        cout << "Podaj wiek ucznia numer " << i+1 << endl;
        cin >> uczniowie[i].wiek;
    }
    return 0;
}
