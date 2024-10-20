#include<iostream>
using namespace std;

int main()
{
	cout<<"podaj liczbê wiêksza od 0: ";
	int n;
	cin>>n;
	int w = (n*(n+1))/2;
	cout<<"suma ciagu od 1 - n wynosi: "<<w;
}
