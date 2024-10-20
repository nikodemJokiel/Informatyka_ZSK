#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int i,j;
	for(i=0;i<(255/4)+1;++i){
		cout<<"| ";
		for(j=0;j<4;++j){
			cout<<(i*4)+j<<" -> "<<char(i*4+j)<<" |";
		}
		cout<<"\n";
	}
	return 0;
}
