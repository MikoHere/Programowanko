#include <iostream>
#include <string>
using namespace std;

struct osoba{
    string imie, nazwisko, klasa;
    double srednia;
    int wiek;
};

void wypisz (struct osoba a){
	cout<<a.imie<<endl;
	cout<<a.nazwisko<<endl;
	cout<<a.klasa<<endl;
	cout<<a.srednia<<endl;
	cout<<a.wiek<<endl;
}

int main(){
	osoba uczen1={"Adam", "Kowalski", "1GT", 3.00, 21};
	
	osoba uczen2={"\nMarcin", "Nowak", "2GT", 5.27, 22};
	
	osoba uczen3={"\nJustyna", "Wysocka", "3GT", 4.48, 23};
	
	wypisz (uczen1);
	wypisz (uczen2);
	wypisz (uczen3);


return 0;
}
