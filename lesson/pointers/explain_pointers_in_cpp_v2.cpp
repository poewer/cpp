#include <iostream>

using namespace std;



void change(int x){
    x = -1;
}

void change2(int tab[]){
    tab[0] = -1;
}

void change3(int y){
    y = -1;
    cout << "inside of function: " << &y <<endl;
}

void change4(int tab[]){
    tab[0] = -1;
    cout << "inside of function: " << tab <<endl;
}

int main(){

    /*set value on simple variable*/ 
    int a = 5;
    cout <<"Before: " << a << endl;
    change(a);                              //just variable type integer
    cout<<"After: " << a <<"\n"<< endl;

    /*Array "tab" is the pointer*/
    int tab[] = {5};
    cout << "Before: " << a << endl;
    change2(tab);                           //reference copy 
    cout << "After: " << tab[0] << "\n" << endl;

    cout << "Array address = "<<tab <<endl;


    /*Display how work address of variable*/
    int b = 5;
    cout <<"Before: " << &b << endl;
    change3(b);                              //just variable type integer
    cout<<"After: " << &b <<"\n"<< endl;


    /*Show steps how address is changed*/
    int ArrayC[] = {5};
    cout << "Before = " << ArrayC << endl;
    change4(ArrayC);
    cout << "After = " << ArrayC << endl;
    

    return 0;
}
