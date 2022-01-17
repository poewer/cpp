/*
PL:
Napisz funkcję otrzymującą dwa argumenty referencję a oraz wskaźnik b do zmiennych typu int,
która zamienia ze sobą wartości zmiennych,
do których wskaźnik i referencję dostała w argumentach.
*/

/*
EN:
Write a function that receives two arguments reference a and pointer b to variables of type int,
which changes the values ​​of variables with each other,
to which the pointer and the reference were given in the arguments.
*/
#include <iostream>

void function_change( int & a, int *b){
        int tmp;
        tmp  = a;
        a = *b;
        *b = tmp;
} 

int main(){
        int ex_nr = 5;
        int ex_nr_2 = 3;
        std::cout << "Before: " << ex_nr << " | " << ex_nr_2 << std::endl;
        function_change(ex_nr, &ex_nr_2);
        std::cout << "After:  " << ex_nr << " | " << ex_nr_2 << std::endl;
       

    std::cout<<std::endl;   return 0;
}