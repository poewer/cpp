/*
Napisz funkcję, która przyjmuje w argumentach liczbę 4-bajtową całkowitą nieujemną word oraz cztery wskaźniki na 1-bajtowe liczby całkowitą nieujemne b0,b1,b2,b3. Funkcja ma wpisać w argumenty wskazywane wskaźnikami b0..b3 wartości kolejnych bajtów z liczby word. Zadanie zrealizuj za pomocą arytmetyki wskaźnikowej i odpowiedniego ich rzutowania. Przetestuj działanie funkcji.
*/

#include <iostream>
using namespace std;


void fun(unsigned int *word, unsigned char *b0, unsigned char *b1, unsigned char *b2, unsigned char *b3){
    *b0 = (unsigned char)(*b0 + word);
    *b1 = (unsigned char)(*b1 + word);
    *b2 = (unsigned char)(*b2 + word);
    *b3 = (unsigned char)(*b3 + word);
    
    std::cout << *b0 <<"\n";
    std::cout << *b1 <<"\n";
    std::cout << *b2 <<"\n";
    std::cout << *b3 <<"\n";
 
}

int main(){
    unsigned int work;
    unsigned char c,d,f,e;
    c = 0;
    d = 1;
    f = 2;
    e = 3;

    fun((unsigned int*)sizeof(work), &c, &d, &e, &f);
    std::cout<<std::endl;   return 0;
}