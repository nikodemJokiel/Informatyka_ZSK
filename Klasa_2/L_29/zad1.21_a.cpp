#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"podaj n: ";
	cin>>n;
	
	double sum = 0;
	double i=1;
	
	while(i<=n){
		sum+=i;
		i++;
	}
	
	double wynik = (2*n)/sum;
	
	cout<<endl<<"wynik: "<<wynik;

	return 0;
}

