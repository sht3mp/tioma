#include <iostream>
using namespace std;

  /*
    Napisz program, kt�ry wczytuje z klawiatury dowoln� liczb�, analizuje j�
    oraz wy�wietla jeden z komunikat�w:
     - Liczba dodatnia.
     - Liczba zero.
     - Liczba ujemna.
    */

main(){

float liczba;
cout << "Podaj liczbe dowolna:" << endl;
cin >> liczba;

if (liczba > 0){
	cout << "Liczba jest dodatnia." << endl;}

else if (liczba < 0){
	cout << "Liczba jest ujemna." << endl;}

else{
	cout << "Liczba jest rowna 0." << endl;}

system("pause");}
