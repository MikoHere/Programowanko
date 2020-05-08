#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	
    ifstream wejscie;
    ofstream wyjscie;
    wejscie.open ("a.txt");
    wyjscie.open ("b.json", ios::out | ios::app);
	
    int t[10];
    int min=t[0];
	
    if (wejscie.good()) 
	
    	{
        while(!wejscie.eof())

        	for(int i=0; i<10; i++)

        	wejscie>>t[i];
	}
                
                
    for(int i=0; i<10; i++)
	
    	{
	if(min>t[i])
		
       	min=t[i];
	}



    wyjscie <<"[ \n { \n \"Min\" : \" "<< min<<"\"} \n ] \n";
         
    wejscie.close();
    wyjscie.close();
         
         
    return 0;

}
