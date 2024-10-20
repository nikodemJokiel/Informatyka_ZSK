#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
	srand(time(NULL));
	
	for(int i = 0; i<10; i++){
		int a = rand()%31;
	int b = rand()%31;
	int c = rand()%31;
	
	cout<<a<<" "<<b<<" "<<c<<endl;
	if(a>=0 && a<=20 && a>b && b>10||c==0){
		cout<<"prawda"<<endl;
	}
	else{
		cout<<"nieprawda"<<endl;

	}
	}
	
	return 0;
}
