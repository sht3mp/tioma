#include <iostream>
#include <cmath>
using namespace std;

main (){

	// 1. Tworzenie zmiennych
float r;
float P, O;

	// 2. Wyświetlanie komunikatu
cout << "Podaj dlugosc  promienia: " << endl;

	// 3. Pobieranie danych od użytkownika
cin >> r;

	// 4. Obliczenia
P = M_PI * pow (r, 2);
O = 2 * M_PI * r;

	// 5. Wyświetlenie odpowiedzi
cout << "Pole kola wynosi: " << P << endl;
cout << "Obwow kola wynosi: " << O << endl;

system ("pause");}
