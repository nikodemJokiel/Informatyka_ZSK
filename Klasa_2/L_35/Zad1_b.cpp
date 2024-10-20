#include<iostream>


using namespace std;

int main(){
	int n;
	cout<<"podaj liczbe do sprawdenia: ";
	cin>>n;
	int sum = 0;
	
	for(int i = 1; i<n/2+1; i++){
		if(n%i==0){
			sum+=i;
		}
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
