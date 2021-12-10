#include <iostream>
#include <cmath> // biblioteka z funkcjami matematycznymi
using namespace std;

 

// Napisz program, który oblicza pole i obwod pierœcienia.
// D³ugoœci promieni podaje u¿ytkownik.

 


main(){

    // 1. Tworzenie zmiennych
float R, r, O, P;
   
    // 2. Wyœwietlanie komunikatów
	// 3. Pobieranie danych od u¿ytkownika
cout << "Podaj promien zewnetrznego kola: " << endl;
cin >> R;
cout << "Podaj promien wewnetrznego kola: " << endl;
cin >> r;
   
    // 4. Obliczenia 
O = 2 * M_PI * (R+r);
P = M_PI * ( pow (R,2) - pow (r,2)); 
    // 5. Wyœwietlenie odpowiedzi
cout << "Obwod pierœcienia to: " << O << endl;
cout << "Pole pierscienia to: " << P << endl;
 

system("pause");}
