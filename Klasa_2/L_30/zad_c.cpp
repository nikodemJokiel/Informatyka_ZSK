#include <iostream>

using namespace std;

int main(){
	
	int a;
	cout<<"podaj podstawe potegi: ";
	cin>>a;
	
	int n;
	cout<<"podaj wykladnik potegi: ";
	cin>>n;

	if(a==0&&n==0){
		cout<<"0^0 nie istnieje";
		return 0;
	}
	
	int i = 1;
	int w = 1;
	
	while(i<=n){
		w*=a;
		i++;
	}

	cout<<"wynik: "<<w;
	return 0;
}

