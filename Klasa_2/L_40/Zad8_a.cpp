#include<iostream>

using namespace std;

int main(){
	cout<<"podaj oliczbe dzisietna: ";
	int n;
	cin>>n;
	cout<<"Liczba: ";
	while(n>0){
		if(n%2==0){
			cout<<"0";
		}
		else{
			cout<<"1";
		}
		n/=2;
		
	}
	
	
	return 0;
}
