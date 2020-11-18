#include <iostream>
#include <iomanip>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
int red = 0xff0000;
int green = 0x00ff00;
int blue = 0x0000ff;

int kolor1=0x123456;
int kolor2=0x123456;
int kolor3=0x123456;




cout<<hex<<((kolor1& 0xff0000)>>16)<<"\n";
cout<<hex<<((kolor2& 0x00ff00)>>8)<<"\n";
cout<<hex<<((kolor3& 0x0000ff));
	
	return 0;
}
