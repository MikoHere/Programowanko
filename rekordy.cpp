#include <iostream>
#include <string.h>
using namespace std;

struct osoba{
      string imie, nazwisko, klasa;
      double srednia;
      int wiek;
};

void uczen (osoba a){
	cout<<a.imie<<endl;
	cout<<a.nazwisko<<endl;
	cout<<a.klasa<<endl;
	cout<<a.srednia<<endl;
	cout<<a.wiek<<endl;
}

int main(){
	osoba uczen1, uczen2, uczen3;
	uczen1.imie = "Adam";
 	uczen1.nazwisko ="Kowalski";
 	uczen1.klasa="1GT";
 	uczen1.srednia =3.00;
	uczen1.wiek = 21;	
	uczen2.imie = "Marcin";
 	uczen2.nazwisko ="Nowak";
 	uczen2.klasa="2GT";
 	uczen2.srednia =5.27;
	uczen2.wiek = 22;	
	uczen3.imie = "Justyna";
 	uczen3.nazwisko ="Wysocka";
 	uczen3.klasa="3GT";
 	uczen3.srednia =4.48;
	uczen3.wiek = 23;
	
	uczen (uczen1);
	uczen (uczen2);
	uczen (uczen3);


return 0;
}
