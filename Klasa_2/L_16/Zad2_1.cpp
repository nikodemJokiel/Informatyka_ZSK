#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	cout<<"podaj wspolczynniki A, B, C: ";
	float a;
	float b;
	float c;
	cout<<endl<<"podaj A: ";
	cin>>a;
	cout<<endl<<"podaj B: ";
	cin>>b;
	cout<<endl<<"podaj C: ";
	cin>>c;
	cout<<"podaj wspolrzedne punktu do sprawdzenia x, y: ";
	float x;
	float y;
	cout<<endl<<"wspolrzedna x: ";
	cin>>x;
	cout<<endl<<"wspolrzedna y: ";
	cin>>y;
	
	if(a*a + b*b != 0){
		int d = abs(a*x+b*y+c)/sqrt(a*a+b*b);
		if(d==0){
			cout<<"Punkt lezy na prostej Ax+By+C";
		}
		else{
			cout<<"Punkt nie lezy na prostej Ax+By+C";
		}
	}
	else{
		cout<<"nieprawidlowe dane";
	}
}
