#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

ofstream wyjscie;

void wypiszLiczbeLosowa (int max)
{
	int x;
	x=rand()%max+1;
	cout<<x;
}

void wypiszLiczbeJSON(int liczba)
{
	int a;
	a=rand()%liczba+1;
	cout<<"[ \n { \n \"Liczba losowa JSON\" : \" "<< a <<"\"} \n ] \n\n\n";
}

int main()
{
	srand ( time( NULL) );
	
	wypiszLiczbeJSON(12);
	wypiszLiczbeLosowa(10);
	
	return 0;
}

