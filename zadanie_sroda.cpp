#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    string tab[100];

    ifstream plik;
    string dis;
    int x=0;
 
     plik.open( "C:\\a.txt" , ios::in);

    if(plik.good()==false)
    {
    cout<<"Plik nie istnieje ";
        exit(0);
    }

     if(plik.good())
       while(!plik.eof())
                         {
                             getline(plik, dis);
                             plik>>tab[x];
                            x++;
                         }
    plik.close();

    for(int j=0; j<x; j++)
        cout<<tab[j]<<endl;

    return 0;

}
