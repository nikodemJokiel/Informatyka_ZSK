#include<iostream>
using namespace std;
int main(){
	int i=0;
	int input, uje = 0;
	do{
		cin>>input;
		if (input<0){
			uje+=1;
		}
		i += 1;
	}
	while(i<10);
	cout<<"Ujemnych liczb jest: "<<uje<<endl<<"Dodatnich liczb jest: "<<10-uje;
}
