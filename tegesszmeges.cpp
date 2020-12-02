#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	ifstream wejscie;
    ofstream wyjscie;
    wejscie.open ("a.txt");
    wyjscie.open ("b.txt", ios::out | ios::app);
    
    int x;
    
    
    
     if(wejscie.good()){
        	while(!wejscie.eof()){
			wejscie >> hex >> x;
			if(x%2==0){
            wyjscie << dec <<"[ \n { \n  \" "<< x <<"\"} \n ] \n";
        }
        else if (x%2==1){
        	wyjscie << dec <<"[ \n { \n  \" "<< (x-1) <<"\"} \n ] \n";
		}
    }
        
    }
        
        
        
         
    wejscie.close();
    wyjscie.close();
	return 0;

	}
