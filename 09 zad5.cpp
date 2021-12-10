#include <iostream>
using namespace std;

  /*
    Napisz program, który wczytuje z klawiatury dowoln¹ liczbê, analizuje j¹
    oraz wyœwietla jeden z komunikatów:
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
