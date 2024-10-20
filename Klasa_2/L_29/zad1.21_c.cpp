#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"podaj n: ";
	cin>>n;
	
	double pi = 1;
	double i=1;
	
	while(i<=n){
		pi*=(i+3)/n;
		i++;
	}
	
	
	cout<<endl<<"wynik: "<<pi;

	return 0;
}

