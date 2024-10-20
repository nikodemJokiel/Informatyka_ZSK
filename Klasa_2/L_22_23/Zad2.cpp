#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
	
srand(time(NULL));

int x = rand()%(1000+1);
int y = rand()%(1000+1);

if(x>y){
	cout<<"wieksza z wylosowanych liczb: "<<x<<" i "<<y<<" jest: "<<x;
}else{
	cout<<"wieksza z wylosowanych liczb: "<<x<<" i "<<y<<" jest: "<<y;
}

return 0;
}


