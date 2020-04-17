#include <iostream>
#include <fstream>    
using namespace std;

int main()
{
    int t[1000];
    int i=0;
    
    ifstream plik;
    ofstream plik2;
    plik.open("a.txt");
	plik2.open("b.txt");  
    if(plik.good())
    	while(!plik.eof())        
       {
    		plik>>t[i++]; 
        }
        
	if(plik2.good())
		for(int j=i-1; j>=0; j--)
		{ 
		plik2<<" "<<t[j];
		}
    plik.close();   
	plik2.close();            
   
    return 0;
}
