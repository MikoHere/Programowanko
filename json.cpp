#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string linia;
    ifstream wejscie;
    ofstream wyjscie;
    wejscie.open("a.txt");
	wyjscie.open("b.json", ios::out | ios::app);  
    if(wejscie.good())
    	while(!wejscie.eof())        
       {
       	getline(wejscie, linia);
       	
		   getline (wejscie, linia);
		   wyjscie<<"[ \n { \n \"imie\" : \" "<< linia;
       	
		   getline (wejscie, linia); 
		   wyjscie<<"[ \n { \n \"nazwisko\" : \" "<< linia;
        }
        
		
    wejscie.close();   
	wyjscie.close();            
   
    return 0;

}
