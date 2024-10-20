#include<iostream>

using namespace std;

int main(){
	int punkty;
	cout<<"podaj ilosc punktow: ";
	cin>>punkty;
	cout<<"twoja ocena to: ";
	
	if(punkty>=0&&punkty<=39){
		cout<<"niedostateczny";
	}
	else if(punkty>=40&&punkty<=54){
		cout<<"dopuszczajacy";
	}
	else if(punkty>=55&&punkty<=69){
		cout<<"dostateczny";
	}
	else if(punkty>=70&&punkty<=84){
		cout<<"dobry";
	}
	else if(punkty>=85&&punkty<=98){
		cout<<"bardzo dobry";
	}
	else if(punkty>=99&&punkty<=100){
		cout<<"celeujacy";
	}
	else if(punkty<0){
		cout<<"blad: podaj dobra ilosc punktow";
	}
	return 0;
}
