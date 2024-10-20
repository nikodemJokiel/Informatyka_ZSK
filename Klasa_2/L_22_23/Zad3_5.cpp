#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
	
srand(time(NULL));

int l1 = -15+rand()%(15-(-15)+1);
cout<<l1<<endl;
//calkowita -15 do 15

int l2 = 3+rand()%(25-3+1);
cout<<l2<<endl;
//calkowita 3 do 25

double l3 = 1.5+(double)rand()/RAND_MAX*(2.25-1.5);
cout<<l3<<endl;
//rzeczywista 1.5 do 2.25

double l4 = (double)rand()/RAND_MAX;
cout<<l4<<endl;
//rzeczywista 0 do 1

double l5 = (double)rand()/RAND_MAX*64.5;
cout<<l5<<endl;
//rzeczywista 0 do 64.5

return 0;
}


