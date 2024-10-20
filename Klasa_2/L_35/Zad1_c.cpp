#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int n;
	cout<<"podaj liczbe do sprawdenia: ";
	cin>>n;
	int sum = 1;
	double p = sqrt(n);
	if(n==0){
		cout<<"liczba "<<n<<" nie jest doskonala";
		return 0;
	}
	
	for(int i = 2; i<=p; i++){
		if(n%i==0){
			sum+=i;
			sum+=(n/i);
			
		}
	}
	if(p*p==n){
		sum-=p;
	}
	
	if(sum==n){
		cout<<"liczba "<<n<<" jest doskonala";
	}
	else
	{
		cout<<"liczba "<<n<<" nie jest doskonala";
	}
	return 0;
}
