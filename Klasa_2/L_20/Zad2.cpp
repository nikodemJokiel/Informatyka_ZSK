#include<iostream>
using namespace std;
int main(){

cout<<"podaj 1 liczbe: ";
int x;
cin>>x;
cout<<"podaj 2 liczbe: ";
int y;
cin>>y;
int max = (x>y ? x : y);
cout<<max;

return 0;
}
