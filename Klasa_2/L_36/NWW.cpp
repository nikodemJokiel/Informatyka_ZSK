#include<iostream>

using namespace std;

int main(){
	cout<<"Podaj 1 liczbe: ";
	int a;
	cin>>a;
	cout<<"Podaj 2 liczbe: ";
	int b, r;
	cin>>b;
	int ap=a;
	int bp=b;
	
	while(b!=0){
		r = a%b;
		a = b;
		b = r;
	}
	
	int nww = (ap*bp)/a;
	cout<<"NWW "<<ap<<" i "<<bp<<" jest rowne: "<< nww;
	
	return 0;
}
