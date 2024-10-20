#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	
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
	
	cout<<"podaj wspolrzedne punktu C";
	float x3;
	float y3;

	
	cout<<endl<<"wspolrzedna X: ";
	cin>>x3;
	cout<<endl<<"wspolrzedna Y: ";
	cin>>y3;

	
	if(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2) != 0)
	{
		float area = abs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) / 2);
		cout<<"Pole trojkata wynosi: "<<area<<"j^2"<<endl;
		float ab = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		float bc = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
		float ac = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
		cout<<"Obwod trojkata wynosi: "<<ab+bc+ac<<"jednostek";
		
	}
	else{
		cout<<"Punkty A, B, C nie moga byc wierzcholkami trojkata";
	}
}
