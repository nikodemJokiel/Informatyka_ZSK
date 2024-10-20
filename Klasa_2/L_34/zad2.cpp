#include<iostream>


using namespace std;

int main(){
	int n;
	cout<<"podaj liczbe n: ";
	cin>>n;
	cout<<"rozklad na czynniki liczby "<<n<<endl;
	int div = 2;
	int div_c =0;
	while(n>1){
		while(n%div==0){
			div_c+=1;
			n/=div;
		}
		if(div_c!=0){
			cout<<div<<"^"<<div_c<<" ";
			div_c = 0;
		}
		
		div++;
	}
	
	
	
	return 0;
}
