#include <iostream>
#include <cmath>

using namespace std;

int main()
{
cout<<"podaj liczbe do sprawdzenia: ";
int n;
cin>>n;

int suma = 0;
int iloczyn = 1;
while (n > 0) {
    int c = n % 10;
    suma += c;
    iloczyn *= c;
    n /= 10;
}
if(suma = iloczyn){
	cout<<"liczba jest irysowa\n\n";
}
else{
	cout<<"liczba nie jest irysowa\n\n";
}


return 0;

}
