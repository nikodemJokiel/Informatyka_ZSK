#include <iostream>

using namespace std;

int main()
{
cout<<"podaj n: ";
int n;
cin>>n;

int counter = 0;

for (int i = 1; i<=n; i++){
	if(i%10==1||i%10==2||i%10==7){
		counter+=i;
	}
}

cout<<"Suma liczb spelniajacaych warunek wynosi: "<<counter;


return 0;

}
