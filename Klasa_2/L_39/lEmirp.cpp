#include <iostream>
#include <cmath>

using namespace std;

int main()
{
cout<<"podaj liczbe do sprawdzenia: ";
int n;
cin>>n;
bool pierwsza1 = true;
bool pierwsza2 = true;
if(n<=1){
	pierwsza1=false;
}
for(int i=2; i<n; i++){
	if(n%i==0){
		pierwsza1=false;
	
	}
}

int p = 0;
  while (n > 0) {
    p *= 10;
    p += n % 10;
    n /= 10;
    
}

if(p<=1){
	pierwsza2=false;
}
for(int i=2; i<p; i++){
	if(p%i==0){
		pierwsza2=false;
		
	}
}

if(pierwsza1 == true&&pierwsza2==true){
	cout<<"liczba jest liczba Emirp";
}
else{
	cout<<"liczba nie jest liczba Emirp";
}
return 0;

}
