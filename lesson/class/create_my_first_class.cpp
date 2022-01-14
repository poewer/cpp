#include <iostream>

class Class_name{          // The class  
    public:                // Access specifier
        int x;             // Define x;
        int poweruser(int x){   // Method/function defined inside the class
            return x * 3;
        }

        void New_method();      // Method/function declaration

};

// Method/function definition outside the class
void Class_name::New_method(){
    std::cout << "It's my new method" << std::endl; 
}


int main(){
    Class_name user1;       // Create an object of Class_name
    user1.x = 10;
    int poweruser = user1.poweruser(user1.x);
    std::cout << poweruser << std::endl; // Call the method 
    
    Class_name new_test;
    new_test.New_method();

    return 0;
}
