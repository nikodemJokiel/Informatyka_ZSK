#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i = 0, sum = 1;
	do{
		sum *= (i+1); 
		i++;
	}
	while(i<n);
	cout<<sum;
}
