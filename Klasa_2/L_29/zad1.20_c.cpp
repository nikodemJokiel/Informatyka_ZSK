#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"podaj n: ";
	cin>>n;
	
	int w = -10;
	int sum = 0;
	cout<<"ciag: ";
	
	int i=1;
	
	while(i<=n){
		
		cout<<w<<", ";
		
		sum+=w;
		w+=6;
		i++;
	}
	cout<<endl<<"suma: "<<sum;
	
	
	
	
	return 0;
}

