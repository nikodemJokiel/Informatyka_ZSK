#include<iostream>


using namespace std;

int main(){
	int n;
	cout<<"podaj liczbe n: ";
	cin>>n;
	cout<<"rozklad na czynniki liczby "<<n<<endl;
	int div = 2;
	
	while(n>1){
		while(n%div==0){
			cout<<div<<" ";
			n/=div;
		}
		div++;
	}
	
	
	
	return 0;
}
