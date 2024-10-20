#include<iostream>

using namespace std;

int main(){
	int liczba;
	cout<<"podaj liczbe do sprawdzenia: ";
	cin>>liczba;
	
	if(liczba%3==0){
		cout<<"liczba: "<<liczba<<" jest podzielna przez 3"<<endl;
	}
	else{
		cout<<"liczba: "<<liczba<<" nie jest podzielna przez 3"<<endl;
	}
	
	if(liczba%5==0){
		cout<<"liczba: "<<liczba<<" jest podzielna przez 5"<<endl;
	}
	else{
		cout<<"liczba: "<<liczba<<" nie jest podzielna przez 5"<<endl;
	}
	
	if(liczba%7==0){
		cout<<"liczba: "<<liczba<<" jest podzielna przez 7"<<endl;
	}
	else{
		cout<<"liczba: "<<liczba<<" nie jest podzielna przez 7"<<endl;
	}
	
	if(liczba%10==0){
		cout<<"liczba: "<<liczba<<" jest podzielna przez 10"<<endl;
	}
	else{
		cout<<"liczba: "<<liczba<<" nie jest podzielna przez 10"<<endl;
	}
	
	
	
	
	return 0;
}
