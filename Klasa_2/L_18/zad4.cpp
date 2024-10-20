#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	const double liczba = 123.666666666666;
	cout<<"a. "<<liczba<<"\n";
	cout<<"b. "<<setw(9)<<liczba<<"\n";
	cout<<"c. "<<setw(12)<<setfill('*')<<liczba<<"\n";
	cout<<"d. "<<setprecision(8)<<setfill(' ')<<liczba<<"\n";
	cout<<"e. "<<setw(14)<<setfill('0')<<liczba<<"\n";
}
