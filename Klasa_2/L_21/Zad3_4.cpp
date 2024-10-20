#include<iostream>
#include<cmath>
using namespace std;
int main(){

cout<<"podaj a: ";
double a;
cin>>a;
cout<<"podaj b: ";
double b;
cin>>b;

double x = sqrt(7/(pow(a,3)+cos(b)));

double y = sin(pow((a+b),4)/(sqrt(11)+1));

double z = pow((cos(a+1)/(sqrt(5)+3)),3);

cout<<x<<endl;
cout<<y<<endl;
cout<<z<<endl;
return 0;
}
