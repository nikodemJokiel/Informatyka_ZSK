#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"podaj n: ";
	cin>>n;
	
	int w = -10;
	
	int sum = 0;
	cout<<"ciag: ";
	for(int i=1; i<=n; i++){
		
		cout<<w<<", ";
		
		sum+=w;
		w+=6;
	}
	cout<<endl<<"suma: "<<sum;
	
	
	
	
	return 0;
}
