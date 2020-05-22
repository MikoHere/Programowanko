#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int a;
	
	int t[5];
	int b[5];
	int liczba=0;
	
	ofstream plik;
	plik.open ("b.json", ios::out | ios::app);
	
    for(int i=0; i<5; i++){
        cout << "Podaj liczbe: ";
        cin >> a;
        if(a%2==1){
            liczba++;
            b[liczba]=a;
        }
    }
    for(int i=0; i<=liczba; i++){
        plik<<"[ \n { \n \"Liczba nieparzyste to\" : \" "<< b[i]<<"\"} \n ] \n";
    }
	
	plik.close();
	
	
	return 0;
}


