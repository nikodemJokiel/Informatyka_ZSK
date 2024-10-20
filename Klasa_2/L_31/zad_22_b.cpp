#include<iostream>
using namespace std;
int main(){
	int n;
	n = 24;
	do{
		if(n%4==0){
			n--;
			continue;
		}
		else{
			cout<<n<<" ";
		}
		n--;
	}
	while(n>=9);
}
