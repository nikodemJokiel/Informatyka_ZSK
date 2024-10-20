#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"podaj n: ";
	cin>>n;
	
	double sum = 0;
	double i=1;
	int x = 3;
	
	while(i<=n){
		sum+=(2*x)/i;
		i++;
		x*=2;
	}
	
	
	cout<<endl<<"wynik: "<<sum;

	return 0;
}

