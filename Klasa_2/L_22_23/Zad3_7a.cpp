#include<iostream>

using namespace std;

int main(){
	
int a = 3;
int b = -2;
int c = 10;

if(a+b<c){
	a*=2;
	b-=1;
	if(c>0){
		c+=a;
	}else{
		c+=b;
	}
}else{
	c+=a*b;
}
cout<<a<<" "<<b<<" "<<c<<" ";
return 0;
}


