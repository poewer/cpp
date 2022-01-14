#include <iostream>

int main(){
    char SomeString[] = "Hello!";
    char *pSomeString = SomeString;

    std::cout << "pSomeString = " << pSomeString << "\n";

    char *plocation3 = &SomeString[3];
    char *plocation0 = &SomeString[0];

    std::cout << "plocation3 = " << plocation3 << "\n";
    std::cout << "plocation0 = " << (int)*plocation0 << "\n";
    std::cout << "Difference = " << plocation3 - plocation0 << "\n";

    /*###########################################################################*/
    std::cout<<"\n\n";

    char SomeString2[10];
    char *pSomeString2 = SomeString2;

    std::cout << "pSomeString2 = " << pSomeString2 << "\n";

    char *plocation4 = &SomeString[4];
    char *plocation1 = &SomeString[1];

    std::cout << "plocation4 = " << plocation4 << "\n";
    std::cout << "plocation1 = " << plocation1 << "\n";
    std::cout << "Difference = " << plocation4 - plocation1 << "\n";
    
    
    
    std::cout<<std::endl;  return 0;
}