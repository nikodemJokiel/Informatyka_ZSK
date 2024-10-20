#include<iostream>
using namespace std;

int main()
{
	const double pi = 3.14;
	cout<<"podaj promien kola: ";
	double r;
	cin>>r;
	const double w = pi*r*r;
	cout<<"pole kola: "<<w<<"cm^2";
}
