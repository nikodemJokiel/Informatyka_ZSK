#include<iostream>

using namespace std;

int main(){
	
int rok;
cout<<"podaj rok do sprawdzenia: ";
cin>>rok;

if(rok%100!=0){
	if(rok%4==0){
	cout<<"rok "<<rok<<" to rok przestepny";
	}
}
else if(rok%400==0){
	cout<<"rok "<<rok<<" to rok przestepny";
}
else{
	cout<<"rok "<<rok<<" to nie jest rok przestepny";
}


return 0;
}


