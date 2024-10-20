#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int n;
	cout<<"podaj liczbe do sprawdenia: ";
	cin>>n;
	
	int k = log10(n)+1;
	int x = pow(10,k);
	if(n==n*n%x){
		cout<<"liczba jest automorficzna";
	}
	else{
		cout<<"liczba nie jest automorficzna";
	}
	return 0;
}
