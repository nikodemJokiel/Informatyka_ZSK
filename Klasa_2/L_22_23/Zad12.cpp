#include<iostream>

using namespace std;

int main(){
	
int a1;
int b1;
int c1;
int a2;
int b2;
int c2;
cout<<"podaj a1: ";
cin>>a1;
cout<<"podaj b1: ";
cin>>b1;
cout<<"podaj c1: ";
cin>>c1;
cout<<"podaj a1: ";
cin>>a2;
cout<<"podaj b2: ";
cin>>b2;
cout<<"podaj c2: ";
cin>>c2;

int w = a1*b2 - a2*b1;
int wx = c1*b2 - c2*b1;
int wy = a1*c2 - a2*c1;

if(w!=0){
	double x = wx/w;
	double y = wy/w;
	cout<<"rozwiazanie x, y: "<<x<<", "<<y;
	
}
else if(wx==0&&wy==0){
	cout<<"niskonczona ilosc rozwiazan";
}
else{
	cout<<"brak rozwiazan";
}

return 0;
}

