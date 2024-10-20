#include<iostream>
using namespace std;
int main(){

cout<<"podaj 1 liczbe: ";
double x;
cin>>x;
cout<<"podaj 2 liczbe: ";
double y;
cin>>y;
cout<<"podaj 3 liczbe: ";
double z;
cin>>z;

double maxxy = (x>y)?x:y;
double maxyz = (y>z)?y:z;

double max = (maxxy>maxyz) ? maxxy: maxyz;

cout<<max;
return 0;
}
