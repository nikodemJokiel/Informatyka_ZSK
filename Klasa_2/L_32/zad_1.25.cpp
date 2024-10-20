#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(NULL));
	int maks=-1,sum=0,n;
	do{
		n = (rand()%49)+2;
		cout<<"Wylosowana liczba: "<<n<<"\n";
		sum += n;
		if(n>maks){
			maks = n;
		}
	}
	while(n%7!=0);
	cout<<"Suma wylosowanych liczb to: "<<sum<<"\n";
	cout<<"Najwieksza wylosowana liczba to: "<<maks;
	
	
	
	
}
