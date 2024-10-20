#include <iostream>

using namespace std;

int main()
{

for(int i=1; i<=3; i++){
	for(int j=0; j<i; j++){
		cout<<"* ";
	}
	for(int k=3; k>=i; k--){
		cout<<"| ";
	}
	
	if(i%2!=0){
		cout<<"$ $ ";	
	}
	else{
		
		cout<<"$ $ $ $ ";
	}

}
return 0;

}
