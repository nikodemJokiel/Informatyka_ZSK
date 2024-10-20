#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"podaj n: ";
	cin>>n;
	
	
	int i = 1;
	int sum = 0;
	int fac = 1;

	while(i<=n){
		fac*=i;
		sum+=fac;
		
		i++;
	}
	
	
	cout<<endl<<"wynik: "<<sum;

	return 0;
}

