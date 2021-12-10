/*
Typy danych i zmienne.
------------------------------
Po co s� zmienne?
Odp. DO przechowywania informacji w programie
(pami�ci komputera), na kt�rych komputer wykonuje operacje
(przetwarza dane).

Po co s� typy danych?
Odp. R�ne informacje komputer r�nie przechowuje w swojej pami�ci.
Inaczej przechowuje liczny
Inczej liczby rzeczywiste, liczny ca�kowite,
inaczej przechowuje napisy itd...
Typ danych m�wi, w jaki spos�b i jakiego typu
informacje chcemy przechowa�.
*/

#include <iostream>
using namespace std;

main(){

	/*
	 tworzenie zmiennej;

	 typ_danych nazwa zmiennej;
	*/

		// google.pl -> c++ typy danych -> cpp0x.pl ; algorytm.edu.pl

		// liczby ca�kowite (short, int, long long)

int liczba = 123; // stworzenie zmiennej i jej zaincjowanie (podanie warto�ci poraz 1.)
	cout << "liczba: " << liczba << endl;
liczba = 2147483647;
	cout << "liczba: " << liczba << endl;
liczba = 2147483648; // bl�d - przekroczyli�my zakres
	cout << "liczba: " << liczba << endl;

		//liczny rzeczywiste (float, double, long double)
double liczba2 = 123.123456789;
	cout << "liczba2: " << liczba2 << endl;

		// typ logiczny bool, czyli prawda/fa�sz
bool i=true;
bool j=false;
	cout << "i: " << i << endl;
	cout << "j: " << j << endl;
		// true to 1, false to 0

		// char - jeden znak
char znak = 'a';
char znak2 = 'A'; // apostrofy
	cout << znak << ", " << znak2 << endl;

		// przechowywanie napis�w - string
string napis1 = "to jest napis"; // cudzys�owia
	cout << "napis1: " << napis1 << endl;
 
		// zadanie 1.

int a = 321;
	cout << "a: " << a << endl;

		// zadanie 2.

bool b = true;
bool b2 = false;
	cout << "b: " << b << endl;

		// zadanie 3.

double c = 3.21;
	cout << "c: " << c << endl;

		// zadanie 4.

string d = "informatyka";
	cout << "d: " << d << endl;

		// zadanie 5.

char e = '+';
	cout << "e: " << e << endl;
 
system ("pause");}
