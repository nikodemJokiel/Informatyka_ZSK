#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	
	cout<<"podaj wspolrzedne punktow A; B: ";
	float xa;
	float ya;
	float xb;
	float yb;
	
	cout<<endl<<"wspolrzedna Xa: ";
	cin>>xa;
	cout<<endl<<"wspolrzedna Ya: ";
	cin>>ya;
	cout<<endl<<"wspolrzedna Xb: ";
	cin>>xb;
	cout<<endl<<"wspolrzedna Yb: ";
	cin>>yb;

	cout<<"podaj wspolczynniki równanie Ax + By + C: ";
	float a;
	float b;
	float c;
	cout<<endl<<"podaj A: ";
	cin>>a;
	cout<<endl<<"podaj B: ";
	cin>>b;
	cout<<endl<<"podaj C: ";
	cin>>c;

	if( a!=0 && b!=0)
	{
		double o1 = abs(a*xa+b*ya+c)/(sqrt(pow(a,2)+pow(b,2)));
		double o2 = abs(a*xb+b*yb+c)/(sqrt(pow(a,2)+pow(b,2)));
		if(o1 == 0 && o2 ==0)
		{
			cout<<"odcinek lezy na prostej Ax+By+C";
		}
		else
		{
			cout<<"odcinek nie lezy na prostej Ax+By+C";
		}
	}
	else{
		cout<<"blad danych";
	}
	
	
	
	
	
	
}
