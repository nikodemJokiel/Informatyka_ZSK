#include <iostream>

using namespace std;

int main()

{

	double skladka = 100.0; // 100 zlotych
	
	double prowizja = 0.1; // 10% prowizji od ka¿dej skladki
	
	double dochodowosc = 0.05; // 5% dochodowoœæ inwestycji (w skali roku)
	
	int ile_lat = 35;
	
	double kapital = 0.0;
	
	for (int i = 0; i <12*ile_lat ; i++)
	
		{
		
		kapital = kapital * (1.0 + dochodowosc /12.0);
		
		kapital = kapital + skladka *(1.0 - prowizja);
		
		}

			cout <<"suma wplaconych skladek: " <<skladka *12 *ile_lat;

			cout <<"\nkapital koncowy = " <<kapital <<"\n";

}
