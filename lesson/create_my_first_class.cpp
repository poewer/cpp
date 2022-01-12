#include <iostream>

class Player{
    public:
        int x,y;

};


int main(){
    Player user1;
    user1.x = 10;
    user1.y = 20;
    std::cout << user1.x << std::endl;
    return 0;
}
