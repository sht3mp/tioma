#include <iostream>
#include <cmath>
using namespace std;

		// b) Funkcje, które nie zwracaj¹ wartoœci, ale przyjmuj¹ parametry/agrumenty.

void wizytowka( string imie, string nazwisko, int wiek ){
	cout << "-----------" << endl;
	cout << "Imie: " << imie << endl;
	cout << "Nazwisko: " << nazwisko << endl;
	cout << "Wiek: " << wiek << endl;
	cout << "----------" << endl;}

// Æw. 1. Napisz funkcjê o nazwie pole_obwod_kwadratu,
// która przyjmuje jeden parametr (d³ugoœæ boku),
// oblicza pole i obwód oraz wyœwietla napis: Pole wynosi ..., a obwod ... .

void pole_obwod_kwadratu( float a ){
float p, o;
p = pow(a,2);
o = 4*a;
cout << "Pole wynosi: " << p << " , a obwod: " << o << "." << endl;}

/*
ZROBIÆ!!!!!
a) Pole i obwód prostok¹ta (parametry: a, b).
b) Pole i obwód ko³a (parametr r).
c) Odleg³oœæ dwóch punktów (parametry: x1, y1,  x2, y2)
d) Pole i obwód pierœcienia (R, r).
*/


// a)
void pole_obwod_prostokata( float a, float b ){
float p, o;
p = a*b;
o = 2*a+2*b;
cout << "Pole wynosi: " << p << " , a obwod: " << o << "." << endl;}

// b)
void pole_obwod_kola( float r){
float p, o;
p = M_PI*pow(r,2);
o = 2*M_PI*r;
cout << "Pole wynosi: " << p << " , a obwod: " << o << "." << endl;}

// c)
void odleglosc_punktow( float x1, float y1, float x2, float y2){
float d;
d = sqrt((((pow(x2-x1, 2)))+((pow(y2-y1, 2)))));
cout << "Odleglosc miedzy dwoma punktami wynosi: " << d << "." << endl;}

// d)
void pole_obwod_pierscienia(float R, float r){
float p, o;
p = M_PI*(pow(R, 2)-pow(r, 2));
o = 2*M_PI*(R + r);
cout << "Pole wynosi: " << p << " , a obwod: " << o << "." << endl;}

main(){

		// wizytowka(); // bl¹d bo trzeba podaæ wszystkie argumenty/parametry
	wizytowka("Julisz", "Cezar", 2068);

	wizytowka("Mlody", "Eryk", 18);

	pole_obwod_kwadratu(10);

	pole_obwod_prostokata(5, 10);

	pole_obwod_kola(5);

	odleglosc_punktow(10, 13, 12, 11);

	pole_obwod_pierscienia(10, 5);

system("pause");}
