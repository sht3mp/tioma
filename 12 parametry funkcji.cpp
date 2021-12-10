#include <iostream>
#include <cmath>
using namespace std;

		// b) Funkcje, kt�re nie zwracaj� warto�ci, ale przyjmuj� parametry/agrumenty.

void wizytowka( string imie, string nazwisko, int wiek ){
	cout << "-----------" << endl;
	cout << "Imie: " << imie << endl;
	cout << "Nazwisko: " << nazwisko << endl;
	cout << "Wiek: " << wiek << endl;
	cout << "----------" << endl;}

// �w. 1. Napisz funkcj� o nazwie pole_obwod_kwadratu,
// kt�ra przyjmuje jeden parametr (d�ugo�� boku),
// oblicza pole i obw�d oraz wy�wietla napis: Pole wynosi ..., a obwod ... .

void pole_obwod_kwadratu( float a ){
float p, o;
p = pow(a,2);
o = 4*a;
cout << "Pole wynosi: " << p << " , a obwod: " << o << "." << endl;}

/*
ZROBI�!!!!!
a) Pole i obw�d prostok�ta (parametry: a, b).
b) Pole i obw�d ko�a (parametr r).
c) Odleg�o�� dw�ch punkt�w (parametry: x1, y1,  x2, y2)
d) Pole i obw�d pier�cienia (R, r).
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

		// wizytowka(); // bl�d bo trzeba poda� wszystkie argumenty/parametry
	wizytowka("Julisz", "Cezar", 2068);

	wizytowka("Mlody", "Eryk", 18);

	pole_obwod_kwadratu(10);

	pole_obwod_prostokata(5, 10);

	pole_obwod_kola(5);

	odleglosc_punktow(10, 13, 12, 11);

	pole_obwod_pierscienia(10, 5);

system("pause");}
