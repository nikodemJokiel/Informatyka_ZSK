#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i = 0;
	long long top_silnia = 1;
	double total_top=1;
	double bottom_sum=0;
	do{
		total_top *= (double)(n*n)/(double)(top_silnia);
		top_silnia *= -(i+2);
		bottom_sum += (double)(i+1)/(double)(3*(i+1));
		i++;
	}
	while(i<n);
	double sum = total_top / bottom_sum;
	cout<<sum;
}
