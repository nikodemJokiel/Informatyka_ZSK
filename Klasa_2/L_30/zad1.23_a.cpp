#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"podaj n: ";
	cin>>n;
	
	int w = 2;
	int i = 1;
	int sum = 0;

	while(i<=n){
		if(i%2==0){
			sum += w;
		}
		else{
			
			w*=-1;
			sum+=w;
			w*=-1;
		}
		
		w+=3;
		i++;
	}
	
	
	cout<<endl<<"wynik: "<<sum;

	return 0;
}

