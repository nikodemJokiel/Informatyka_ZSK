#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*Przypuszczenia:
		a = 4;
		b = 3;
		c = 7;
		d = 4;
		e = 4;
		f = 8;
		g = 3;
		h = 3;
		i = 7; 
		m = 4;
		n = 3;
		o = 8;
	*/
	
	int a=3, b=4, c;
	++a;
	b--;
	c = a + b;
	cout<<"a= "<<a<<" b= "<<b<<" c= "<<c<<endl;
	int d=3, e=4, f;
	f = ++d + e;
	cout<<"d= "<<d<<" e= "<<e<<" f= "<<f<<endl;
	int g=3, h=4, i;
	i = g + h--;
	cout<<"g= "<<g<<" h= "<<h<<" i= "<<i<<endl;
	int m=3, n=4, o;
	o = ++ m+ n--;
	cout<<"m= "<<m<<" n= "<<n<<" o= "<<o<<endl;
	return 0;


}
