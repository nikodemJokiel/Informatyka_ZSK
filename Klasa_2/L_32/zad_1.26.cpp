#include<iostream>
using namespace std;
int main(){
	int x=0,y=1,z=2,i=0;
	do{
		int j = 0;
		do{
			if(i%2==0){
				if(j==1 || j==3){
					cout<<x<<endl;
				}
				else{
					cout<<z<<"\n";
				}
			}
			else{
				if((j+1)%3!=0){
					cout<<y<<"\n";
				}
				else{
					cout<<x<<endl;
				}
			}
			j += 1;
		}
		while(j<5);
		i += 1;
	}
	while(i<5);
	return 0;
	
	
}
