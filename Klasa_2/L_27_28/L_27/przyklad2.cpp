#include <iostream>

using namespace std;

int main(){
	
	cout<<"Parzyste, trzycyfrowe - rosnaca"<<endl;
		
		for(int i=100; i<1000; i++)
		if(i%2==0) cout<<i<<" ";
		
	cout<<"\n";
	cout<<"Parzyste, trzycyfrowe - malejaca"<<endl;
		
		for(int j=999; j>=100; j--)
		if(j%2==0) cout<<j<<" ";
	
	return 0;
}
