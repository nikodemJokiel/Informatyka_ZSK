#include <iostream>

using namespace std;

int main()
{
int counter = 0;
/*
for (int i = 1; i<=9; i++){
	for (int j = 0; j<=9; j++){
		for (int k = 0; k<=9; k++){
			if(i!=j&&i!=k&&j!=k){
				cout<<i<<j<<k<<endl;
				counter +=1;
			}
		}
	}	
}
*/
int i = 1;


while (i<=9){
	int j = 0;
	while (j<=9){
		int k = 0;
		while (k<=9){
			if(i!=j&&i!=k&&j!=k){
				cout<<i<<j<<k<<endl;
				counter +=1;
			}
			k++;
		}
		j++;
	}
	i++;
}

cout<<counter<<" liczb spelnijacych warunek";
return 0;

}
