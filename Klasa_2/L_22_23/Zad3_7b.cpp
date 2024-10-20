#include<iostream>

using namespace std;

int main(){
	
int x = 5;
int y = 1;
int z = 6;
x+=y;

if(x>y+1){
	x+=z;
	z--;
}
if(z<3){
	z*=x;
}
else{
	z*=y;
	z++;
}

cout<<x<<" "<<y<<" "<<z<<" ";

return 0;
}


