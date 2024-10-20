#include <iostream>
#include <limits>

using namespace std;

int main()
{
//podręcznik str.222

cout <<"\nOperator rozmiaru sizeof i zakres wartosci dla wybranych typow danych"<<endl;

//zakres dla typu int
cout<<"\nsizeof(int) = "<< sizeof(int)<<" [byte]"<<endl;
cout<<"min(int): "<<numeric_limits<int>::min()<<endl;
cout<<"max(int): "<<numeric_limits<int>::max()<<endl;

//zakres dla typu float
cout<<"\nsizeof(float) = "<< sizeof(float)<<" [byte]"<<endl;
cout<<"min(float): "<<numeric_limits<float>::min()<<endl;
cout<<"max(float): "<<numeric_limits<float>::max()<<endl;


//zakres dla typu double
cout<<"\nsizeof(double) = "<< sizeof(double)<<" [byte]"<<endl;
cout<<"min(double): "<<numeric_limits<double>::min()<<endl;
cout<<"max(double): "<<numeric_limits<double>::max()<<endl;

//ewentualne inne typy danych
cout<<"\nsizeof(bool) = "<< sizeof(bool)<<" [byte]"<<endl;
cout<<"min(bool): "<<numeric_limits<bool>::min()<<endl;
cout<<"max(bool): "<<numeric_limits<bool>::max()<<endl;

cout<<"\nsizeof(short) = "<< sizeof(short)<<" [byte]"<<endl;
cout<<"min(short): "<<numeric_limits<short>::min()<<endl;
cout<<"max(short): "<<numeric_limits<short>::max()<<endl;

cout<<"\nsizeof(long long) = "<< sizeof(long long)<<" [byte]"<<endl;
cout<<"min(long long): "<<numeric_limits<long long>::min()<<endl;
cout<<"max(long long): "<<numeric_limits<long long>::max()<<endl;

cout<<"\nsizeof(unsigned int) = "<< sizeof(unsigned int)<<" [byte]"<<endl;
cout<<"min(unsigned int): "<<numeric_limits<unsigned int>::min()<<endl;
cout<<"max(unsigned int): "<<numeric_limits<unsigned int>::max()<<endl;

return 0;
}
