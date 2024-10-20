#include<iostream>
using namespace std;
int main(){
	int total=1, input, counter=0;
	do{
		cin>>input;
		total *= input;
		counter++;
	}
	while(total<=10000);
	cout<<"Ilosc liczb roznych od 0: "<<counter<<"\n";
	cout<<"Iloczyn wpisanych liczb: "<<total;
	
	
	
}
