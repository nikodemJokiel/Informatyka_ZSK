#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    double a;
    double b;
    double c;
	cout<<"podaj a: ";
	cin>>a; 
	cout<<"podaj b: ";
	cin>>b; 
	cout<<"podaj c: ";
	cin>>c;
	
	double d = c;
	c -= b;
	c /= a;
	d -= -b;
	d /= -a;
	        
	cout<<"rozwianie: "<<min(c,d)<<" < x < "<<max(c,d);                    
	return 0;
}
