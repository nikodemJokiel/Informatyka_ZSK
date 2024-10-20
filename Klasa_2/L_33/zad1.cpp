#include<iostream>
#include<cmath>

using namespace std;

int main(){
	cout<<"podaj liczbe: ";
	int n, sum=0;
	cin>>n;

	if(n<0){
		n/=-1;
	}
	while(n>0){
		sum += n%10;
		n/=10;
	}
	
	
	cout<<"suma cyfr w liczbie: "<<sum;
	return 0;
}
