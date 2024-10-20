#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"podaj liczbe: ";
	cin>>n;

	int i = 1;
	int fac = 1;

	while(i<=n){
		fac*=i;
		i++;
	}

	cout<<endl<<n<<"! = "<<fac;

	return 0;
}

