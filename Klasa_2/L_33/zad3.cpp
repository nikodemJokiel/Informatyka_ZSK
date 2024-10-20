#include<iostream>


using namespace std;

int main(){
	cout<<"podaj przedzia³ <x; y>:\npodaj x: ";
	int x, y, sum=0;
	
	cin>>x;
	cout<<"podaj y: ";
	cin>>y;
	for(int i=x; i<y+1; i++){
		sum+=i;
		
	}
	
	
	cout<<"suma liczb w przedziale: "<<sum;
	return 0;
}
