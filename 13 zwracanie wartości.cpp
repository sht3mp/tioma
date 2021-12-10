#include <iostream>
#include <cmath>
using namespace std;

// c) Funkcja zwraca wartoœæi nie pzyjmuj¹ parametry parametrów.

string dane_autora(){
	string dane = "Ferdynant Wspanialy, lat 45";

	return dane; // return zwróc wartoœæ i zakoñcz funkcjê
	cout << "tego nie zobaczymy: "; // bez sensu
}

main (){
	dane_autora(); // bez sensu, bo wartoœæ zwraca przez funkcje przepada...

	cout << dane_autora() << endl;

	string abc = dane_autora();
	cout << "Dane autoora to: " << abc << endl;














system("pause");}
