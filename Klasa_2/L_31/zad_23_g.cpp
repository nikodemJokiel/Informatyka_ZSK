#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i = 0;
	int top=-2, sum_top = 0;
	int bottom = 3, sum_bottom = 1;
	double total;
	do{
		sum_top += top;
		top<0?top-=5:top+=5;
		top *= -1;
		sum_bottom *= bottom;
		bottom<0?bottom-=4:bottom+=4;
		bottom *= -1;
		i++;
	}
	while(i<n);
	total = (double)sum_top/(double)sum_bottom;
	cout<<total;
}
