/*
Napisz program, w którym zdefiniujesz bezpośrednio po sobie kilka zmiennych typ: (1) int, (2) float, (3) char, (4) char[7], (5) double. 
Sprawdź w jakiej kolejności te zmienne będą rzeczywiście zaalokowane w pamięci po uruchomieniu programu, 
czy wszystkie zostaną zaalokowane w jednolitym bloku pamięci i ile bajtów będą łącznie zajmowały.
*/

#include <iostream>

int main(){
    int *a;
    float *b;
    char **c;
    char *d[7];
    double *e;

    /*Address of variables*/
    std::cout << &a << "\n" << &b << "\n" << &c  << "\n" << &d << "\n" << &e << std::endl; // All variables are location in one part of memory 

    printf("\n");

    std::cout << a << "\n" << b << "\n" << c << "\n" << d  << "\n" << e << std::endl;


    std::cout<<std::endl;   return 0;
}