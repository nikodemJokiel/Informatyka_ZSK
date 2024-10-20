#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	int n;
	cout<<"podaj n: ";
	cin>>n;
	int x;
	cout<<"podaj argument x: ";
	cin>>x;
	
	switch(n)
	{
		case 1: cout<<"f(x)="<<sqrt(x*2); break;
				
		case 2: cout<<"f(x)="<<pow(x, 3)-5; break;
		
		case 3: cout<<"f(x)"<<cos(x)+1; break;
	
		default: cout<<1; break;
		
		
	}
	
	return 0;
}
