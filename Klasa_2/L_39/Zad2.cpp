#include <iostream>

using namespace std;

int main()
{
cout<<"podaj n: ";
int n;
cin>>n;

int counter = 0;

for (int i = 1; i<=n; i++){
	if(i%100==31||i%100==62||i%100==17){
		counter+=i;
	}
}

cout<<"Suma liczb spelniajacaych warunek wynosi: "<<counter;


return 0;

}
