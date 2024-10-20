#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i = 1;
	do{
		if(n%i==0){
			cout<<i<<endl;
			if(!(i*i == n)){
				cout<<n/i<<endl;
			}
		}
		i+=1;
	}
	while(i<=sqrt(n));
	
}
