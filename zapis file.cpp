#include <fstream>
#include <iostream>

using namespace std;
int main()
{
	string imie, nazwisko; 
	int nr_tel;
	
	cout<<"Podaj imie: "; cin>>imie;
	cout<<"Podaj nazwisko: "; cin>>nazwisko;
	cout<<"Podaj numer telefonu: "; cin>>nr_tel;


fstream plik;
plik.open ("wizytowka.txt", ios::out);
plik<<imie<<endl;
plik<<nazwisko<<endl;
plik<<nr_tel<<endl;
plik.close();

return 0;
}
