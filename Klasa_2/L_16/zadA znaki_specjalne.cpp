#include <iostream>

using namespace std;

int main()
{
    //wyświetlenie  ”tekst” znak spacji  ”tekst”
	cout<<"tekst tekst\n";
	
	//wyświetlenie  tekst1 znak tabulatora poziomego tekst2 znak przejścia do kolejnego wiersza tekst3
	cout<<"tekst1\ttekst2\ntekst3\n";

	//zadeklarowanie zmiennych a i b typu całkowitego i przypisanie im odpowiednio wartości 5 i 3
	int a = 5;
	int b = 3;
	
	
	//wyświetlenie w osobnych wierszach a, b i sumy
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"Suma "<<a+b<<endl;
	//zadeklarowanie zmiennych c i d typu całkowitego
	int c;
	int d;
	
	//wyświetlenie tekstu Podaj dwie liczby
	cout<<"podaj 2 liczby"<<endl;

	//wczytanie wartości dla zmiennych c i d
	cin>>c;
	cin>>d;


	//wyświetlenie w osobnych wierszach c, d i sumy
	cout<<"c="<<c<<endl;
	cout<<"d="<<d<<endl;
	cout<<"Suma "<<c+d<<endl;

    return 0;
}
