#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"podaj n: ";
	cin>>n;
	int w;
	
	cout<<"suma "<<n<<" kolejnych liczb naturalnych: ";
	
	for(int i = 0; i<n; i++){
		w+=i;
		cout<<i<<", ";
	}
	cout<<"wynosi: "<<w;
	return 0;
}
