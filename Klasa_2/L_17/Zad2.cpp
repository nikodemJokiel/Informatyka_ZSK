#include<iostream>
#include<iomanip>
using namespace std;
 
main(){
	cout<<"podaj dwie liczby rzeczywiste:\n";
	double w;
	double z;
	double x = 1234.555555;
	double y = 21.1234567812345678;
	cin>>w;
	cin>>z;
	cout<<"\n";
	cout<<"x = \t"<<setprecision(6)<<x<<"\n\n";
	cout<<"y = "<<setfill('&')<<setw(15)<<setprecision(6)<<y<<"\n\n";
	cout<<"y = "<<setfill('*')<<setw(12)<<setprecision(10)<<y<<"\n\n";
	cout<<"w = "<<setfill('0')<<setw(11)<<w<<"\n\n";
	cout<<"z = "<<setfill('0')<<setw(16)<<z<<"\n\n";
	cout<<"x + y + w = "<<setprecision(12)<<x+y+w<<"\n\n";
	cout<<"x * z  = "<<setprecision(7)<<x*z<<"\n\n";
	return 0;
}
