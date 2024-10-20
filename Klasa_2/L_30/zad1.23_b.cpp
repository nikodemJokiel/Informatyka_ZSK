#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"podaj n: ";
	cin>>n;
	
	int w = 4;
	int i = 1;
	int sum = 1;

	while(i<=n){
		if(i%2==0){
			
			w*=-1;
			sum*=w;
			w*=-1;
		}
		else{
			
			sum *= w;
		}
		
		w+=4;
		i++;
	}
	
	
	cout<<endl<<"wynik: "<<sum;

	return 0;
}

