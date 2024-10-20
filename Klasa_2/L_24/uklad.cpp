#include<iostream>

using namespace std;

int main(){
	int x;
	cout<<"podaj wspolrzedna x: ";
	cin>>x;
	int y;
	cout<<"podaj wspolrzedna y: ";
	cin>>y;
	
	if(x==0 && y==0){
		cout<<0;
	}
	else if(x==0){
		cout<<"OX";
	}
	else if(y==0){
		cout<<"OY";
	}
	else if(x>0 && y>0){
		cout<<"I cwiartka";
	}
	else if(x<0 && y>0){
		cout<<"II cwiartka";
	}
	else if(x<0 && y<0){
		cout<<"III cwiartka";
	}
	else if(x>0 && y<0){
		cout<<"IV cwiartka";
	}
	return 0;
}
