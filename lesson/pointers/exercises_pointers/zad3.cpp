/*
Napisz funkcję, która przyjmuje jako argumenty wskaźniki do trzech zmiennych typu int.
Funkcja powinna do trzeciego argumentu zapisać sumę wartości z liczb wskazywanych przez dwa poprzednie argumenty.
*/

#include <iostream>

int sum(int *a, int *b, int *c){
    return *c = *a + *b;  
}

int main(){
        int x, y, z = 0;
        std::cin >> x >> y;
        std::cout << sum(&x,&y,&z);


    std::cout<<std::endl;   return 0;
}