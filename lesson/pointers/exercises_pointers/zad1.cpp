/*
/*Napisz program, który wydrukuje wartość oraz adres w pamięci zmiennych typu: int,
wskaźnika na typ int niezainicjalizowanego oraz ustawionego na konkretną zmienną. 
Wykorzystaj do tego celu funkcję printf() oraz obiekt std::cout
*/

#include <iostream>
#include <cstdio>


int main(){
    int *a;
    int b = 5;
    int *c = &b;

    std::cout << a << "\n";
    std::cout << &b << "\n";
    std::cout << *c << "\n";


    std::cout<<std::endl; return 0;
}