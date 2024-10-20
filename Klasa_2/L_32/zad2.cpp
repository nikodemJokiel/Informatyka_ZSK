#include<iostream>
using namespace std;
int main(){
	int a,n;
	cin>>a>>n;
	int i=0, potega=1;
	do{
		potega *= a;
		i += 1;
	}
	while(i<n);
	cout<<potega;
}
