#include<iostream>

using namespace std;

int main(){
	cout<<"Podaj n-ta liczbe cziagu Fibonaciego: ";
	int n;
	cin>>n;
	
	int w1 = 0;
	int w2 = 1;
	int fib;
	for(int i = 1; i<n; i++){
		fib = w1+w2;
		w1 = w2;
		w2 = fib;
		
	}
	
	cout<<n<<". liczba ciagu wynosi: "<<w2;
	return 0;
}
