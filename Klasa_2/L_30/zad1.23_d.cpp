#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"podaj n: ";
	cin>>n;
	
	
	double i = 1;
	double sum = 0;
	double j = 1;
	double il = 1;
	double p = 2;
	

	while(i<=n){
		
		sum+=i;
		
		il *= p;
		i++;
		p+=4;
	}
	
	double wynik = sum/il;
	
	
	cout<<endl<<"wynik: "<<wynik;

	return 0;
}

