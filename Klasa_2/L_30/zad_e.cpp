#include <iostream>

using namespace std;

int main(){
	
	int neg = 0;
	int n;
	int i = 1;
	while(i<=10){
		cout<<"podaj "<<i<<". liczbe calkawita: ";
		cin>>n;
		if(n<0){
			neg++;
		}
		i++;
	}

	cout<<endl<<"podales:\n"<<neg<<" - liczb ujemnych\n"<<10-neg<<" - liczb nieujemnych";

	return 0;
}

