#include<iostream>

using namespace std;

int main(){
	
int m = 5;
int n = 4;
int k = 0;

if(m+n<k){
	cout<<k;
	return 0;
}
else{
	k=m+n;
	if(m+1<n){
		n*=4;
		k--;
	}
	else{
		m*=2;
	}
	cout<<m<<" "<<k<<" "<<n<<" ";
}



return 0;
}


