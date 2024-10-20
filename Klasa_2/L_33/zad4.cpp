#include<iostream>


using namespace std;

int main(){
	int n, odd;
	for(int i=1; i<=20; i++){
		cout<<"podaj "<<i<<". liczbe: ";
		cin>>n;
		if(n%2!=0){
			odd++;
		}
	}
	
	
	cout<<"liczby parzyste: "<<20-odd<<"\nliczby nieparzsyte: "<<odd;;
	return 0;
}
