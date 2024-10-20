#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
	srand(time(NULL));
	cout<<"zgadnij liczbê od 1 do 10: ";
	int y;
	cin>>y;
	int x = 1+rand()%(10);
	if(x==y){
		cout<<"zgadles liczbe: "<<x;
	}
	else{
		cout<<"nie zgadles liczby: "<<x;
	}
	
	
	
	
	
	
	return 0;
}
