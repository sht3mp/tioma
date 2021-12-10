#include <iostream>
using namespace std;

main(){
 
    // Instrukcje iteracyjne
     
    // Pêtla for( I ; II ; III ){ blok iteracji }
     
    // i - jest zmienn¹ iterowan¹ - zmienna ta w trakcie dzi³ania pêtli jest modyfikowana.
    // W tym przypadku roœnie o 1  (i=i+1) - III parametr
    // Na pocz¹tku zmienna i ma wartoœæ 0   (int i=0) - I parametr 
    // Jak d³ugo ma dzi³aæ pêtla?  odp. to II parametr (gdy i<10 )
    // Gdy i bêdzie mniejsze od 10, to wykona siê iteracja {blok instrukcji}.
    
for( int i=0; i<10; i=i+1 ){

	// <=> i++ <=> i+=1

cout << i << ", ";}
cout << endl;

    // zrobiæ pêtlê, która wyœwietli takie wartoœci:    
    //  a) 5, 6, 7, 8,
   
    //  b) 0, 2, 4, 6, 8,  (parzyste)
   
    //  c) 1, 3, 5, 7, 9, 11 (nieparzyste)
   
    //  d) -10,-5, 0, 5, 10 (zmiana o 5)
    
    //  e) -9, -6, -3, 0,
    
    //  f) 9,8,7,6,5,4,3,2,1
    
    //  g) 9,6,3,0
    
    //  h) 8,6,4,2,0

// a

cout << "A: ";
for( int i=5; i<9; i=i+1 ){

	// <=> i++ <=> i+=1

cout << i << ", ";}
cout << endl;

// b

cout << "B: ";
for( int i=0; i<9; i=i+2 ){

	// <=> i++ <=> i+=1

cout << i << ", ";}
cout << endl;

// c

cout << "C: ";
for( int i=1; i<12; i=i+2 ){

	// <=> i++ <=> i+=1

cout << i << ", ";}
cout << endl;

// D

cout << "D: ";
for( int i=-10; i<11; i=i+5 ){

	// <=> i++ <=> i+=1

cout << i << ", ";}
cout << endl;

// E

cout << "E: ";
for( int i=-9; i<1; i=i+3 ){

	// <=> i++ <=> i+=1

cout << i << ", ";}
cout << endl;

// F

cout << "F: ";
for( int i=9; i>0; i=i-1 ){

	// <=> i++ <=> i+=1

cout << i << ", ";}
cout << endl;

// G

cout << "G: ";
for( int i=9; i>-1; i=i-3 ){

	// <=> i++ <=> i+=1

cout << i << ", ";}
cout << endl;

// H

cout << "H: ";
for( int i=8; i>-1; i=i-2 ){

	// <=> i++ <=> i+=1

cout << i << ", ";}
cout << endl;

  
    system("pause");}
