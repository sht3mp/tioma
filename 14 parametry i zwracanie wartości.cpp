#include <cmath>
#include <iostream>
using namespace std;

// d) Funkcja zwraca wartoœæ i przyjmuje parametry.
// mp.     pow( x, n ) - potegowanie x do potegi n
// float pole = M_PI * pow(r,2);

/*
Utwórz funkcje, które zwracaj¹ i przyjmuj¹ parametry:
a) pole ko³a,
b) obwód ko³a,
c) odleg³oœæ dwóch punktów,
d) pole pierœcienia,
e) obwód pierœcienia.
Wywo³aj te funkcje, aby by³o widaæ wynik na ekranie.
*/

float pole_prostokata (float a, float b){
	float pole = a*b;
	return pole;}

float obwod_prostokata (float a, float b){
	float obwod = 2*a+2*b;
	return obwod;}

float pole_obwod_prostokata (float a, float b){
	float pole = a*b;
	float obwod = 2*a+2*b;
	return pole; // zwraca wartoœæ i koñczy funkcje
	return obwod;} // to siê nie wykona

float pole_kola (float r){
	float pole = M_PI*pow(r, 2);
	return pole;}

float obwod_kola (float r){
	float obwod = 2*M_PI*r;
	return obwod;}

float odleglosc_punktow (float x1, float x2, float y1, float y2){
	float d = sqrt((((pow(x2-x1, 2)))+((pow(y2-y1, 2)))));
	return d;}

float pole_pierscienia (float R, float r){
	float pole = M_PI*((pow(R, 2)-pow(r, 2)));
	return pole;}

float obwod_pierscienia (float R, float r){
	float obwod = 2*M_PI*(R+r);
	return obwod;}
 
main(){ 

	cout << pole_prostokata (2, 4) << endl;

	cout << pole_prostokata (2.5, 4) << endl;

	float v = pole_prostokata (2.5, 4)*10; // Pp*H
	cout << "Objetosc prostopadloscianu wynosi: " << v << "." << endl;

	cout << "Obwod prostokata wynosi: " << obwod_prostokata (2, 4) << "." << endl;

	cout << "Pole i obwod wynosza: " << pole_obwod_prostokata (2, 4) << "." << endl; // ---- JEST ¯LE

	cout << "A) Pole kola wynosi: " << pole_kola (2) << "." << endl;

	cout << "B) Obwod kola wynosi: " << obwod_kola (2) << "." << endl;

	cout << "C) Odleglosc miedzy punktem A i B wynosi: " << odleglosc_punktow (1, 2, 3, 4) << "." << endl;

	cout << "D) Pole pierscienia wynosi: " << pole_pierscienia (2, 4) << "." << endl;

	cout << "E) Obwod pierscienia wynosi: " << obwod_pierscienia (2, 4) << "." << endl;

system("pause");}
