#include <iostream>
#include <fstream>    
using namespace std;

int main()
{
    int t[1000];
    int i=0;
    ifstream plik;
    plik.open("c:\\a.txt");
	  
    if(plik.good())
     while(!plik.eof())        
       {
    		plik>>t[i++];       
            cout<<endl; 
        }
    plik.close();
     
    ofstream plik2;                     
    plik2.open("c:\\a.txt", ios::out | ios::app);
	   for (int j=i-1; j>=0; j--) 
{ 
t[j];
}
    plik2.close();               
   
    cout<<endl;
    system("PAUSE");
    return 0;
}
