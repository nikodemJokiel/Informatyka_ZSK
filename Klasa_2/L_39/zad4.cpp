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

for (int i = 1; i<=n; i++){
	p=i;
	for(int j = 1; j<=log10(i)+1; j++){
		counterp += p%10;
		p/=10;
	}
	if(counterp%2==0){
		counter+=i;
	}
	counterp=0;
}

cout<<"Suma liczb spelniajacaych warunek wynosi: "<<counter;


return 0;

}
