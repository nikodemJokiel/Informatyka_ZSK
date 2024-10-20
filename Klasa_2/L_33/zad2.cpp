#include<iostream>
#include<cmath>

using namespace std;

int main(){
	cout<<"podaj liczbe: ";
	int n, sum=0;
	
	cin>>n;

	if(n<0){
		n/=-1;
	}
	while(n>0){
		sum++;
		
		n/=10;
		
	}
	
	
	cout<<"liczba cyfr: "<<sum;
	return 0;
}
