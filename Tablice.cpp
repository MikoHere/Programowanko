#include <iostream>

using namespace std;

int main() {
	double t[521];
	string wynik;
	for (int i=521; i>=0; i--){
		t[i]=0;
		t[i]=i;
		wynik=(t[i]=i*2);
	}


	for (int i=521;i>=0;i--)
	
	cout<<t[i]<<" ";
	
	return 0;
}
