/*
PL:
Zmodyfikuj poprzedni program (zad3.cpp) tak aby korzystał z referencji.
*/

/*
EN:
Modify the previous program (zad3.cpp) to use the reference.
*/


#include <iostream>

int sum(int *a, int *b, int *c){
    return *c = *a + *b;  
}

int main(){
        int a = 1, b = 2, c = 0;

        std::cout << sum(&a,&b,&c); // calling a function with (&) (just as we would pass pointers)


    std::cout<<std::endl;   return 0;
}