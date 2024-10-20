#include<iostream>
#include<string>
#include <algorithm> 
using namespace std;

int main(){
	cout<<"podaj oliczbe dzisietna: ";
	int n;
	cin>>n;
	string w;
	while(n>0){
		if(n%2==0){
			w+="0";
		}
		else{
			w+="1";
		}
		n/=2;
		
	}
	reverse(w.begin(), w.end()); 
	cout<<"Liczba: "<<w;
	
	return 0;
}
