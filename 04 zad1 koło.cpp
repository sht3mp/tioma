#include <iostream>
#include <cmath>
using namespace std;

main (){

	// 1. Tworzenie zmiennych
float r;
float P, O;

	// 2. Wy�wietlanie komunikatu
cout << "Podaj dlugosc  promienia: " << endl;

	// 3. Pobieranie danych od u�ytkownika
cin >> r;

	// 4. Obliczenia
P = M_PI * pow (r, 2);
O = 2 * M_PI * r;

	// 5. Wy�wietlenie odpowiedzi
cout << "Pole kola wynosi: " << P << endl;
cout << "Obwow kola wynosi: " << O << endl;

system ("pause");}
