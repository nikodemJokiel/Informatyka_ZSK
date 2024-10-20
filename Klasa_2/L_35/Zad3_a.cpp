#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int n;
	cout<<"podaj liczbe do sprawdenia: ";
	cin>>n;
	
	int k = log10(n)+1;
	int p;
	int p2 = 0;
	int p3 = n;
	while (n!=1){
		for(int i = 0; i<k; i++){
			p = n%10;
			p2 += p*p;
			n /= 10;
			
		}
		n=p2;
		if(n == 4){
			cout<<"liczba "<<p3<<" nie jest wesola";
			return 0;
		}
		cout<<n<<endl;
		p2=0;
		k = log10(n)+1;
	
	}
	
	cout<<"liczba "<<p3<<" jest wesola";
	

	
	
}
