/*
PL:
Napisz funkcję, która przyjmuje jako argumenty wskaźniki do trzech zmiennych typu int.
Funkcja powinna do trzeciego argumentu zapisać sumę wartości 
z liczb wskazywanych przez dwa poprzednie argumenty.
*/

/*
EN:
Write a function that takes pointers to three ints as arguments.
The function should write the sum of the values ​​to the third argument
from the numbers indicated by the previous two arguments.
*/

#include <iostream>

int sum(int *a, int *b, int *c){
    return *c = *a + *b;  
}

int main(){
        int x = 1, y = 2, z = 0;
        int *x_1 = &x;
        int *y_1 = &y;
        int *z_1 = &z;
        
        std::cout << sum(x_1,y_1,z_1);


    std::cout<<std::endl;   return 0;
}