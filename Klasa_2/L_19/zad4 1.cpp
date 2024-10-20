#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int m=8, n=0, wynik;

	wynik=m||n;
	
	cout<<wynik<<"\t";
	
	wynik=m&&n;
	
	cout<<wynik<<"\t";
	
	wynik=!m;
	
	cout<<wynik<<"\t";
	
	wynik=!n;
	
	cout<<wynik<<endl;


}
