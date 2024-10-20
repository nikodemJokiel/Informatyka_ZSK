#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	
	cout<<"podaj wspolrzedne punktow wspolczyniniki y=kx+b1 i y=mx+b2";
	float k;
	float b1;
	float m;
	float b2;
	
	cout<<endl<<"wspolczyninik k: ";
	cin>>k;
	cout<<endl<<"wspolczyninik b1: ";
	cin>>b1;
	cout<<endl<<"wspolczyninik m: ";
	cin>>m;
	cout<<endl<<"wspolczyninik b2: ";
	cin>>b2;

	
	if(k==0 || m==0){
		cout<<"nie zachodzi zadna zaleznosc";
	}
	else if(k==m)
	{
		cout<<"proste sa rownolegle"<<endl;
	}
	else if(k*m==-1){
		cout<<"proste sa prostopadle"<<endl;
	}
	else{
		cout<<"nie zachodzi zadna zaleznosc";
	}
	
	
	
	
	
	
}
