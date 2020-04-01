#include <iostream>

using namespace std;

struct film{
	string tytul, rezyser, gatunek;
	int rok, czasTrwaniaMinut;
};

int main()
{
	
	film t[5];
	for (int i=0; i<5; i++)
	{
		t[i].tytul="";
		t[i].rezyser="";
		t[i].gatunek="";
		t[i].rok=0;
		t[i].czasTrwaniaMinut=0;
	}
	
	for(int i=0; i<5; i++)
	{
		cout<<"Podaj tytul filmu: ";
		cin>>t[i].tytul;
		
		cout<<"Podaj rezysera filmu: ";
		cin>>t[i].rezyser;
		
		cout<<"Podaj gatuenk filmu: ";
		cin>>t[i].gatunek;
		
		cout<<"Rok utworzenia filmu: ";
		cin>>t[i].rok;
		
		cout<<"Czas trwania filmu (w minutach): ";
		cin>>t[i].czasTrwaniaMinut;
	}
	
	for (int i=0; i<5; i++)
	{
		cout<<"<-Jego tytul jest napisany wlasnie tutaj\n"<<t[i].tytul;
	}
		
	for (int i=0; i<5; i++)
	{
		cout<<"<-A oto jest rezyser filmu\n"<<t[i].rezyser;
	}
	
	for (int i=0; i<5; i++)
	{
		cout<<"<-To wlasnie jego gatunek\n"<<t[i].gatunek;
	}
	
	for (int i=0; i<5; i++)
	{
		cout<<"<-Utworzony w \n"<<t[i].rok;
	}
	
	for (int i=0; i<5; i++)
	{
		cout<<"<-To jest jego dlugosc \n"<<t[i].czasTrwaniaMinut;
	}
	
	return 0;
}
