#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"podaj n: ";
	cin>>n;
	
	
	int i = 1;
	double sum1 = 0;
	double sum2 = 0;
	double coun = -0.2;
	double fac = 1;

	while(i<=n){
		

		if(i%2==0){
			
			i*=-1;
			fac*=i;
			sum1+=fac;
			i*=-1;
			
		}
		else{
			fac*=i;
			sum1 += fac;
			
		}
		
		sum2+=coun;
		coun+=0.3;
		
		i++;
	}
	
	double wynik = sum1/sum2;
	cout<<endl<<"wynik: "<<wynik;

	return 0;
}

