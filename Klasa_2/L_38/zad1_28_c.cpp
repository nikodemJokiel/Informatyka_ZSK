#include <iostream>

using namespace std;

int main()
{

for(int i=1; i<=5; i++){
	cout<<"* ";
	
	if(i%2!=0){
		for(int j=0; j<i; j++){
		cout<<"| ";
		}	
	}
	else{
		for(int j=0; j<i; j++){
		cout<<"- ";
	}
}
}
return 0;

}
