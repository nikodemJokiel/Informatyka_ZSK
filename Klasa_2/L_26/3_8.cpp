#include<iostream>
using namespace std;

int main(){
	int n;

	cout<<"podaj n: ";

	cin>>n;

	if (n==1){
		cout<<"poniedzialek"<<endl;
	}
	else if (n==2){
		cout<<"wtorek"<<endl;
	}
	else if (n==3){
		cout<<"œroda"<<endl;
	}
	else if (n==4){
		cout<<"czwartek"<<endl;
	}
	else if (n==5){
		cout<<"piatek"<<endl;
	}
	else if (n==6){
		cout<<"sobota"<<endl;
	}
	else{
		cout<<"niedziela"<<endl;
	}
	
		
	/*
	switch (n)
	{

		case 1: cout<<"poniedzialek"<<endl; break;

		case 2: cout<<"wtorek"<<endl; break;

		case 3: cout<<"sroda"<<endl; break;

		case 4: cout<<"czwartek"<<endl; break;

		case 5: cout<<"piatek"<<endl; break;

		case 6: cout<<"sobota"<<endl; break;

		case 7: cout<<"niedziela"<<endl; break;

		default: cout<<"podano bledna wartosc"<<endl; break;
	
	}
	*/
	return 0;
}
