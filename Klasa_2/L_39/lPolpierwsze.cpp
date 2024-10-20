#include <iostream>
#include <cmath>

using namespace std;

int pierwszyDzielnik(int a) {
  for(int i = 2; i <= sqrt(a); i++){
    if(a % i == 0){
      return i;
    }
  }
  return 0;
}
bool czyPolpierwsza(int a) {
  int dzielnik = pierwszyDzielnik(a);
  return (dzielnik != 0 && pierwszyDzielnik(a / dzielnik) == 0);
}


int main()
{
cout<<"podaj liczbe do sprawdzenia: ";
int n;
cin>>n;

if(czyPolpierwsza(n)){
	cout<<"liczba jest polpierwsza";
}
else{
	cout<<"liczba nie jest polpierwsza";
}
return 0;
  


}
