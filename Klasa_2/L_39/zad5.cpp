#include <iostream>
#include <cmath>

using namespace std;

int main()
{
cout<<"podaj n: ";
int n;
cin>>n;
if(n<=1){
	cout<<"liczba nie jest pierwsza";
	return 0;
}
for(int i=2; i<n; i++){
	if(n%i==0){
		cout<<"liczba nie jest pierwsza";
		return 0;
	}
}
cout<<"liczba jest pierwsza";


return 0;

}
