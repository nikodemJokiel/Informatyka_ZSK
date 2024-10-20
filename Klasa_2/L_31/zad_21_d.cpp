#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	long long counter = 3;
	double sum = 0;
	do{
		sum += (double)(2*counter) / (double)(i);
		counter *= 2;
		i++;
	}
	while(i<=n);
	cout<<sum;
}
