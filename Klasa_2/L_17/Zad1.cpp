#include<iostream>
#include<iomanip>
using namespace std;
 
main(){
	int t = 325;
	
	cout<<"t = "<<t<<"\n";
	cout<<"Konwersja systemow liczbowych: \n";
	cout<<"szesnastkowy = "<<hex<<t<<"\n";
	cout<<"dziesietny = "<<dec<<t<<"\n";
	cout<<"szesnastkowy = "<<setfill('-')<<setw(9)<<hex<<t<<"\n";
	cout<<"osemkowy = "<<setfill('^')<<setw(14)<<oct<<t<<"\n";
	return 0;
}
