#include<iostream>

using namespace std;

int main(){
	cout<<"Podaj 1 liczbe: ";
	int a;
	cin>>a;
	cout<<"Podaj 2 liczbe: ";
	int b, r;
	cin>>b;
	
	while(b!=0){
		r = a%b;
		a = b;
		b = r;
	}
	
	cout<<"NWD jest rowne: "<< a;
	
	return 0;
}
