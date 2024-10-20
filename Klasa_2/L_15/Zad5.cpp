#include<iostream>
using namespace std;

int main()
{
	cout<<"podaj liczbê wiêksza od 0: ";
	int n;
	cin>>n;
	
	int x = n/1000;
	n = n - x * 1000;
	int y = n/100;
	n = n - y * 100;
	int z = n/10;
	n = n - z * 10;
	int j = n/1;
	n = n - j * 1;

	cout<<"liczba tysiecy: "<<x<<endl;
	cout<<"liczba setek: "<<y<<endl;
	cout<<"liczba dziesiatek: "<<z<<endl;
	cout<<"liczba jednosci: "<<j<<endl;
}
