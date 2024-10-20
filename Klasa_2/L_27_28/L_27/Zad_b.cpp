#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"podaj n: ";
	cin>>n;
	int w = 1;
	
	cout<<"iloczyn "<<n<<" kolejnych liczb naturalnych: ";
	
	for(int i = 1; i<n+1; i++){
		w*=i;
		cout<<i<<", ";
	}
	cout<<"wynosi: "<<w;
	return 0;
}
