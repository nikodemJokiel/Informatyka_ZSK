#include<iostream>
#include<cmath>
using namespace std;

int main(){
	cout<<"podaj oliczbe dzisietna: ";
	int n;
	cin>>n;
	int p = n;
	
	int i = 0;
	while(p>0){
		p/=2;
		i++;
	}
    ;
	
	int w[i];
	cout<<"Liczba: ";
	int z = 0;
	while(n>0){
		if(n%2==0){
			w[z]=0;
			
		}
		else{
			w[z]=1;
		}
		n/=2;
		z++;
	}
	
	
	
	for(int j = i; j>=0; j--){
		if(j!=i){
			cout<<w[j];
		}
		
	}
	
	
	return 0;
}
