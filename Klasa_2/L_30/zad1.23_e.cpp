#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"podaj n: ";
	cin>>n;
	
	
	double i = 1;
	double il1 = 1;

	double il2 = 1;
	double p1 = 2;
	double p2 = -3;
	

	while(i<=n){
		
		il1 *= p1;
		
		il2 *= p2;
		i++;
		p1+=0.5;
		p2/=10;
	}
	
	double wynik = il1/il2;
	
	
	cout<<endl<<"wynik: "<<wynik;

	return 0;
}

