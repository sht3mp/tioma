#include <iostream>
#include <cmath> // zawiera funkcje do obliczeñ
using namespace std;

main(){

   // operatory arytmetyczne  (komentarz liniowy/wierszowym)
    /*                           (komentarz blokowy)
        +
        -
        *
        / dzielenie
        % reszta z dzielenia (modulo)
    */

cout << (2 + 3) << endl;
cout << (12.3 + 10.6) << endl;

cout << (9 - 15) << endl;
cout << (12 + -3.5) << endl;

cout << (2+2*2) << endl;
cout << (2+2)*2 << endl;

cout << (5/2) << endl;
cout << (5.0/2) << endl;

    // r/c = r
    // c/r = r
    // r/r = r   
   
    // c/c = c   dzielenie ca³kowite!!!  div

cout << (5%2) << endl;
cout << (6%3) << endl;
cout << (5%8) << endl;
cout << (10%6) << endl;

    // biblioteka cmath (stara wersja math.h)
   
    // google -> c++ cmath -> http://www.cplusplus.com/reference/cmath/
   
    // pow(x,y) - x do potêgi y   

cout << pow(2, 3) << endl;

	// pierwiatek !!!drugiego!!! stopnia z liczby 9
cout << sqrt (9) << endl;
	// pierwiastek !!!trzeciego!!! stopnia z liczby 8
cout << cbrt (8) << endl;
	//ka¿dy pierwiastek mo¿ña przedstawiæ za pomoc¹ potêgowania

	// jak obliczyæ pierwiastek czwartego stopnia z 16?
cout << pow (16, 1.0/4) << endl; // b³¹d
	// 1/4 = 0 - bo dzielenie ca³kowite
	// 1.0/4 = 0.25
cout << pow (16, 1.0/4) << endl;  
	// funkcje zaokr¹glaj¹ce liczbê do ca³oœci

	// round () - do najbli¿szej
cout << round (1.5) << endl; // 2
cout << round (1.4) << endl; // 1

	// jak zaokr¹gliæ do okreœlonej cyfry po przecinku?
cout << round (1.25555) << endl; // 
cout << (round (1.25555 * 100)) / 100.0 << endl; // 
cout << (round (1.25555 * 1000)) / 1000.0 << endl; // 


	// ceil () - w górê
cout << ceil (1.1) << endl; // 2

	// flour () - w dó³
cout << floor(1.9) << endl; // 1

	// wartoœæ bezwzglêdna
cout << abs (-9) << endl;
cout << fabs (-5.6863284234) << endl; // liczby rzeczywiste (float)


	// Pi
cout << M_PI << endl;
	// Eulera
cout << M_E << endl;

	// Minimum i maksimum
cout << min (6.7, 4.98) << endl;
cout << max (6.7, 4.98) << endl;

	// reszta z dzielenia z liczb rzeczywistych
    //cout << 2.5 % 1 << endl; // b³¹d!! operator % dzia³a
                             // liczbach ca³kowitych

cout << fmod (2.5, 1) << endl; // dzia³a na liczbach rzeczywistych





























system("pause");}
