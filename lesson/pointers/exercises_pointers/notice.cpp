#include <iostream>
#include <string.h>
int main(){

    int var = 8;
    void* newptr = 0; // the same NULL or nullptr

    char* buffer = new char[8];
    memset(buffer, 0, 8);
    
    char** ptr = &buffer;

    delete[]    buffer;
    return 0;
}

        /*
         tmp 
         a = 1
         b = 2 
       
        tmp  =  a // 1
        a = b  // 2
        b = tmp // 1


        tmp = &a;
        &a = &b;
        &b = tmp;
        */


