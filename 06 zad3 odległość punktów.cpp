#include <iostream>
#include <cmath>
using namespace std;
/*
Napisz program, kt�ry prosi o podanie wsp�rz�dnych punkt�w,
oblicza odleg�o�� i wy�wietla na ekranie komunikat:

 

"Odleg�o�� punkt A(...,...) i punktu B(...,...) to ... ."

 

*/

main()
{

// 1. Tworzenie zmienych
float x1, x2, y1, y2, d;

cout << "Podaj x1: " <<endl;
cin >> x1;
cout << "Podaj x2: " <<endl;
cin >> x2; 
cout << "Podaj y1: " <<endl;
cin >> y1; 
cout << "Podaj y2: " <<endl;
cin >> y2;

d = sqrt(pow(x2-x1, 2) + pow (y2-y1, 2));

cout << "Odleglosc pomiedzy punktem A i B wynosi: " << d << "." <<endl;

system("pause");
}
 
