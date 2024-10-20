#include<iostream>

using namespace std;

int main(){
	cout<<"Podaj n-ta liczbe cziagu Fibonaciego: ";
	int n;
	cin>>n;
	
	int w1 = 0;
	int w2 = 1;
	int fib;
	if(n>0){
		cout<<1<<endl;	
	}

	for(int i = 1; i<n; i++){
		fib = w1+w2;
		w1 = w2;
		w2 = fib;
		cout<<w2<<endl;
	}
	
	
	return 0;
}
