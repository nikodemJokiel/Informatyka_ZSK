#include<iostream>


using namespace std;

int main(){
	int n, p;
	cout<<"podaj 1. liczbe: ";
	cin>>n;
	int min =n;
	int max = n;
	for(int i=2; i<=10; i++){
		cout<<"podaj "<<i<<". liczbe: ";
		cin>>n;
		
		if(n<min){
			min=n;
		}
		if(n>max){
			max=n;

		}
	}
	
	
	cout<<"najmnejsza liczba: "<<min<<"\nnajwieksza liczba: "<<max;;
	return 0;
}
