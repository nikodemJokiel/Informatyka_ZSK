#include<iostream>
#include<ctime>
using namespace std;

int main(){
	
	int choice;
	bool menu = true;
	
	do{
	cout<<"wybierz co chcesz zrobic: "<<endl;
	cout<<"1. Dane ucznia"<<endl;
	cout<<"2. Aktualna data"<<endl;
	cout<<"3. Samodzielnie wybrany algorytm"<<endl;
	cout<<"4. Zakonczenie programu"<<endl;
	cout<<"wybor: ";
	cin>>choice;
	cout<<endl;
	
	switch(choice)
	{
		case 1: cout<<"Jan Kowalski\n\n"; break;
				
		case 2: cout<<"19.12.2023"; break;
		
		case 3: cout<<"Samodzielnie wybrany algorytm\n\n"; break;
	
		case 4: menu = false ; break;
		
		default: cout<<1; break;
		
		
	}
	}while(menu);
	
	
	
	return 0;
}
