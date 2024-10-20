#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	
	cout<<"podaj wspolrzedne punktu P";
	float x0;
	float y0;

	
	cout<<endl<<"wspolrzedna X: ";
	cin>>x0;
	cout<<endl<<"wspolrzedna Y: ";
	cin>>y0;
	

	cout<<"podaj wspolrzedne punktu S";
	float x1;
	float y1;

	
	cout<<endl<<"wspolrzedna X: ";
	cin>>x1;
	cout<<endl<<"wspolrzedna Y: ";
	cin>>y1;
	
	float r = sqrt(pow(x0 - x1, 2) + pow(y0 - y1, 2));
	cout<<"d³ugosc promienia wynosi: "<<r<<"jednostek"<<endl;
	
	cout<<"podaj wspolrzedne punktu T";
	float x2;
	float y2;

	
	cout<<endl<<"wspolrzedna X: ";
	cin>>x2;
	cout<<endl<<"wspolrzedna Y: ";
	cin>>y2;

	
	
	
	float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	
	if(distance <= r){
		cout<<"Punkt T nalezy do kola o srodku S i promieniu "<<r;
	}
	else{
		cout<<"Punkt T nie nalezy do kola o srodku S i promieniu "<<r;
	}
	
	
	
	
	
}
