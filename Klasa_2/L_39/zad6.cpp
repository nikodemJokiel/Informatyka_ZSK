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
	p=i;
	
	for(int j = 1; j<=log10(i)+1; j++){
		counterp += p%10;
		p/=10;
	}
	if(counterp<=1){
		prime = false;
	}
	for(int z=2; z<counterp; z++){
		if(counterp%z==0){
		prime = false;
		}
	}
	if(prime == true){
		counter+=i;
	}
	prime = true;
	counterp=0;
}
cout<<"Suma liczb spelniajacaych warunek wynosi: "<<counter;
return 0;

}
