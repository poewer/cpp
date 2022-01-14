#include <iostream>


int main(){
    int SomeArray[10];

    int *plocation6 = &SomeArray[6]; 
    int *plocation1 = &SomeArray[1];

    std::cout << "plocation6 = " << *plocation6 << std::endl;
    std::cout << "plocation1 = " << *plocation1 << std::endl;
    std::cout << "Difference = " << plocation6 - plocation1 << std::endl;

    std::cout<<"\n"<<"\n";  //space between results

    int Array2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *plocation0 = &Array2[0]; 

    std::cout << "Array2 = ";
    for(int i =0; i < 10; i++){
        std::cout << Array2[i] << " "; 
    }

    std::cout<<"\n"<<"\n";  //space between results

    /*First way to represent*/
    for(int i =0; i < 10; i++){
        std::cout << Array2 + i << " = "<<*(Array2 + i) << std::endl;
    }

    std::cout<<"\n"<<"\n";  //space between results

    /*Second way to represent*/
    for (int i = 0; i < 10; i++)
    {
        std::cout << plocation0 << " = " << *plocation0 << std::endl;
        plocation0++;
    }
    

    std::cout<<std::endl; return 0;
}


/*

int a = 5;
int  *b = &a; // address of variable a 
int c = *b;

| ADDRES |  VALUE(32-BIT)  |
| 100 "c"|        5        |
|  101   |                 |
| 102 "5"|        5        |
|  103   |                 |
| 104 "b"|       102       |
|  105   |                 |
|  106   |                 |

*/