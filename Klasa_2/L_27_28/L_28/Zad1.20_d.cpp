#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"podaj n: ";
	cin>>n;
	
	int w = 1;
	
	int il = 1;
	cout<<"ciag: ";
	for(int i=1; i<=n; i++){
		
		cout<<w<<", ";
		
		il*=w;
		w*=-2;
	}
	cout<<endl<<"iloczyn: "<<il;
	
	
	
	
	return 0;
}
