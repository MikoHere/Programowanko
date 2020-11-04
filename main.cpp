#include <iostream>
#include <bitset>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

string dec2bin(int dziesietna) {
        
        int d;
        string znak;
        if(dziesietna > 0) {
                d = dziesietna;
                znak = "";
        } else {
                d = dziesietna * -1; 
                znak = "-";
        }
       
        string binary = bitset<8>(d).to_string(); 
       
        binary.erase(0, min(binary.find_first_not_of('0'), binary.size()-1)); 
       
        binary = znak + binary; 

        return binary;
}

int main(int argc, char** argv) {
	
	int a,b;

	
	cout<<"podaj liczbe a:";
	cin>>a;
	cout<<"podaj liczbe b:";
	cin>>b;
	
	string bin_a=dec2bin(a);
	string bin_b=dec2bin(b);
	
	cout<<bin_a<<" "
	<<bin_b<<endl;
	
	cout<<(a|b)<<", "
	<<(a&b)<<", "
	<<(a^b)<<endl;
	
	return 0;
}
