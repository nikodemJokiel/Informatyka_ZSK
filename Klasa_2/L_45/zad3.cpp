#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout<<"podaj liczbe binarn¹ : ";
    int n;
    cin>>n;
    
    //cout<<"podaj system liczbowy: ";
    int x = 2;
    //cin>>x; 
    
    int digits = log10(n)+1;
    int A[digits];
    
    for (int i = digits-1; i>=0; i--){
        A[i] = n%10;
        n=n/10;
    }
   
    int w = A[0];
    for(int j=1; j<=digits-1;j++) {
    	w=w*x+A[j];
	}
	
    cout<<"liczba w systmie dziesietnym wynosi: "<<w;

    return 0;
}

