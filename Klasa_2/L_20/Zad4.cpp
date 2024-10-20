#include<iostream>
using namespace std;
int main(){

cout<<"podaj dzielna: ";
double x;
cin>>x;
cout<<"podaj dzielnik: ";
double y;
cin>>y;

(y!=0 ? cout<<x/y : cout<<"Nie mozna dzielic przez 0");


return 0;
}
