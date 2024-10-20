#include<iostream>
#include<math.h>
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
	

	cout<<"podaj wspolrzedne punktu A";
	float x1;
	float y1;

	
	cout<<endl<<"wspolrzedna X: ";
	cin>>x1;
	cout<<endl<<"wspolrzedna Y: ";
	cin>>y1;
	
	cout<<"podaj wspolrzedne punktu B";
	float x2;
	float y2;

	
	cout<<endl<<"wspolrzedna X: ";
	cin>>x2;
	cout<<endl<<"wspolrzedna Y: ";
	cin>>y2;

	float xs = (x1+x2)/2;
	float ys = (y1+y2)/2;
	if( x0==xs && y0==ys)
	{
		cout<<"Punkt P jest srodkiem odcinka AB";
	}
	else{
		cout<<"Punkt P nie jest srodkiem odcinka AB";
	}
}
	
	
	
	
