#include<iostream>

using namespace std;

int main(){
	cout<<"Podaj 1 liczbe: ";
	int a;
	cin>>a;
	cout<<"Podaj 2 liczbe: ";
	int b;
	cin>>b;
	
	while(b!=a){
		
		if(a>b){
			a=a-b;
			
		}
		else{
			b=b-a;
		}
	
	}
	
	cout<<"NWD jest rowne: "<< a;
	
	return 0;
}
