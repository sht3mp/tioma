#include <iostream>
#include <cmath>
using namespace std;

// Temat: Tablice.    
/*
Tablica – kontener uporz¹dkowanych danych takiego samego typu,
        w którym poszczególne elementy dostêpne s¹ za pomoc¹ kluczy (indeksu):
        0, 1, 2, 3,...
*/

main (){

  // 1. definicja (tworzenie) tablicy z inicjalizacj¹ (podanie wartoœci)
  // tablica na liczby ca³kowite (short, int, long long)
  // Indeksy/kluczy: 0 1 2 3 4 5
int tablica1[] = { 6, 3, 7, 0, -3, 4 };

  /*
        int - typ tablicy (tylko liczby ca³kowite)
        tablica1 - nazwa tablicy (mo¿e byæ abc)
        [] - operator tablicowy - charakterystyczny dla tablicy
        ={ ... } - przypisanie wartoœci elementom tablicy       
  */

  // tablica z liczbami rzeczywistymi (float, double, long double)
  // (0.78, -45.9, 0, 8, -99.999)   

float tablica2[] = { 0.78, -45.9, 0, 8, -99.999 };

  // tablica z wartoœciami typu bool  (true, false, 0, 1 )   
  /*
  0 - oznacza nieprawdê - false
  wartoœæ liczbowa inna ni¿ 0 oznacza prawdê true
  */

bool tablica3[] = { true, false, 0, 1 };

  // tablica na znaki (typ char)  ('A', '$', 'O', 'P', 'L')

char tablica4[] = { 'A', '$', 'O', 'P', 'L' };

cout << tablica4 << endl; // wyœwietlenie tablicy znaków

  // tablica na napisy (typ string)  ("napis 1", "napis 2", "napis 3")

string tablica5 [] = { "napis1", "napis2", "napis3" };

    // 2. Odczytywanie/dostêp do elementów tablicy   

cout << tablica1[0] << endl; // I elemenów tablicy
cout << tablica1[1] << endl;
cout << tablica1[2] << endl;
cout << tablica1[3] << endl;
cout << tablica1[4] << endl;
cout << tablica1[5] << endl; // ostatni element

cout << tablica1[6] << endl; // b³¹d przekroczyliœmy zakres tablicy, niema elementu o inndeksie 6
cout << endl;

cout << "elementy tablicy tablica2" << endl;
cout << tablica2[0] << endl;
cout << tablica2[1] << endl;
cout << tablica2[2] << endl;
cout << tablica2[3] << endl;
cout << tablica2[4] << endl;
cout << endl;

// tablica 3

cout << "elementy tablicy tablica3" << endl;
cout << tablica3[0] << endl;
cout << tablica3[1] << endl;
cout << endl;

// tablica 4

cout << "elementy tablicy tablica4" << endl;
cout << tablica4[0] << endl;
cout << tablica4[1] << endl;
cout << tablica4[2] << endl;
cout << tablica4[3] << endl;
cout << tablica4[4] << endl;
cout << endl;

// tablica 5

cout << "elementy tablicy tablica5" << endl;
cout << tablica5[0] << endl;
cout << tablica5[1] << endl;
cout << tablica5[2] << endl;
cout << endl;

 // 3. Definicja tablicy bez inicjalizacji (bez podania wartoœci)

string imiona[5];

// inicjalizacja elementów tablicy
imiona[0] = "Piotrek";
imiona[1] = "Monika";
imiona[2] = "Eliza";
imiona[3] = "Krzysztof";
imiona[4] = "Oskar";

cout << "Imiona to: " << imiona[0] << ", " << imiona [1] << ", " << imiona [2] << ", " << imiona [3] << ", " << imiona[4] << "." << endl;
cout << endl;

int liczba[1000];
    // Jakie wartoœci tam s¹, gdy tablicy nie zainicjalizujemy?
cout << liczba[0] << ", " << liczba [999] << endl;
cout << endl;
    // OdpowiedŸ: tam s¹ œmieci - pozosta³oœci danych po poprzednich programach

	// 4. Wspó³praca tablic z pêtlami
cout << "Wyswietlanie zawartosci tablica1[] za pomoca petli: " << endl;
for( int i=0; i<6; i=i+1 ){
	cout << tablica1[i] << ", ";}
cout << endl;
cout << endl;

    // wyœwietl w osobnych pêtlach elementy tablic:
    // tablica2[], tablica3[], tablica4[], tablica5[], imiona[].
    // Zwróciæ UWAGÊ na ROZMIAR tablic!!!

    cout << "Wyswietlanie zawartosci tablica2[] za pomoca petli: " << endl;
for( int i=0; i<5; i=i+1 ){
	cout << tablica2[i] << ", ";}
cout << endl;
cout << endl;
   
    cout << "Wyswietlanie zawartosci tablica3[] za pomoca petli: " << endl;
for( int i=0; i<2; i=i+1 ){
	cout << tablica3[i] << ", ";}
cout << endl;
cout << endl;

    cout << "Wyswietlanie zawartosci tablica4[] za pomoca petli: " << endl;
for( int i=0; i<5; i=i+1 ){
	cout << tablica4[i] << ", ";}
cout << endl;   
cout << endl;

    cout << "Wyswietlanie zawartosci tablica5[] za pomoca petli: " << endl;   
for( int i=0; i<3; i=i+1 ){
	cout << tablica5[i] << ", ";}
cout << endl;   
cout << endl;

    cout << "Wyswietlanie zawartosci imiona[] za pomoca petli: " << endl;
for( int i=0; i<5; i=i+1 ){
	cout << imiona[i] << ", ";}
cout << endl;
cout << endl;


system("pause");}
