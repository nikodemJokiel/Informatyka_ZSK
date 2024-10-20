#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"podaj n: ";
	cin>>n;
	
	double sigma = 0;
	double i=1;
	
	while(i<=n){
		sigma+=1/(2*i);
		i++;
	}
	
	
	cout<<endl<<"wynik: "<<sigma;

	return 0;
}

