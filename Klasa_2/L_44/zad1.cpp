#include <iostream>
using namespace std;

int main(){
    cout<<"podaj stopien wielomianu: ";
    int n;
    cin>>n;
    double A[n];
    cout<<"podaj wspolczynniki wielomianu: "<<endl;
    for (int i = n; i>=0; i--){
        cout<<"a"<<i<<":";
        cin>>A[i];
        
        }
    cout<<"podaj x:";
    double x;
    cin>>x;
    
    double w = A[0];
    for(int i=1; i<=n;i++) w=w*x+A[i];
    cout<<"wynik: "<<w;
}
