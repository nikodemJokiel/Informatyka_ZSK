#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"podaj dlugosc ciagu kolejnych liczb naturalnych: ";
	cin>>n;
	
	int w = 0;
	
	int sum = 0;
	cout<<"ciag: ";
	for(int i=1; i<=n; i++){
		
		cout<<w<<", ";
		
		sum+=w;
		w+=1;
	}
	cout<<endl<<"suma ciagu kolejnych liczb naturalnych: "<<sum;
	
	
	
	
	return 0;
}
