#include <iostream>
#include <cmath>
using namespace std;

// c) Funkcja zwraca warto��i nie pzyjmuj� parametry parametr�w.

string dane_autora(){
	string dane = "Ferdynant Wspanialy, lat 45";

	return dane; // return zwr�c warto�� i zako�cz funkcj�
	cout << "tego nie zobaczymy: "; // bez sensu
}

main (){
	dane_autora(); // bez sensu, bo warto�� zwraca przez funkcje przepada...

	cout << dane_autora() << endl;

	string abc = dane_autora();
	cout << "Dane autoora to: " << abc << endl;














system("pause");}
