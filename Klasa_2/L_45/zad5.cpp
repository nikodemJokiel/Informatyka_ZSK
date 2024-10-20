#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout<<"podaj k : ";
    int k;
    cin>>k;
    
    cout<<"podaj p: ";
    int p;
    cin>>p; 
    
    cout<<"podaj n: ";
    int n;
    cin>>n; 
    
    int a[n-1];
    cout<<"podaj cyfry liczby: "<<endl;
    for (int i = n; i>=0; i--){
        cout<<"a"<<i<<":";
        cin>>a[i];
    }
       
    int w = a[n];
    for(int j=n-1; j>=0 ;j--) {
    	w=w*p+a[j];
	}
	
    cout<<"liczba w systmie dziesietnym wynosi: "<<w;

    return 0;
}

