#include <iostream>
#include <cmath>

using namespace std;

int main()
{
cout<<"podaj n: ";
int n;
cin>>n;

int counter = 0, counterp = 0;
int p;
bool prime = true;


for (int i = 1; i<=n; i++){
	
	if(i<=1){
		prime = false;
	}
	for(int j=2; j<i; j++){
		if(i%j==0){
		prime = false;
		}
	}
	if(prime == true){
		counter+=i;
	}
	prime = true;
}

cout<<"Suma liczb spelniajacaych warunek wynosi: "<<counter;
return 0;

}
