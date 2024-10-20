#include <iostream>

using namespace std;

int main()
{
    cout<<"Nikodem Jokiel\n";
    cout<<"11-07-2007\tPoznan"<<endl;
    
    cout<<"podaj lugosc przyprostokatnych:\nprzyprostokatna a: ";
    int a;
    cin>>a;
    cout<<"przyprostokatna b: ";
    int b;
    cin>>b;

	int p = (a*b)/2;
	
	cout<<"Dla podanych dlugosci przyprostokatnych\na="<<a<<"\t"<<"b="<<b<<",\npole trojkata prostokatnego\nP="<<p<<".";
	
    
    return 0;
}
