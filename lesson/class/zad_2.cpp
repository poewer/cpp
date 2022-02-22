/*
Napisz klasê Mutex, której obiekty w ka¿dym momencie s¹ w jednym z dwóch stanów wolny lub zajêty. Bezpoœrednio po utworzeniu obiekt typu Mutex powinien byæ w stanie wolny. Klasa powinna udostêpniaæ nastêpuj¹ce publiczne metody:
- lock(), której wywo³anie zmienia stan mutexa z wolny na zajêty (w przypadku, gdy mutex jest ju¿ w stanie zajêty, metoda nie powinna zmieniaæ jego stanu),
- release(), której wywo³anie zmienia stan mutexa z zajêty na wolny (w przypadku, gdy jest ju¿ w stanie wolny, metoda nie powinna zmieniaæ jego stanu),
- state() zwracaj¹c¹ wartoœæ true gdy mutex jest w stanie wolny i false w przeciwnym wypadku.
Zadbaj o odpowiedni¹ hermetyzacjê klasy i o prawid³ow¹ inicjalizacjê obiektów.
W programie g³ównym stwórz dynamiczn¹ tablicê obiektów Mutex, automatyczn¹ tablicê dynamicznych obiektów Mutex, dynamiczn¹ tablicê dynamicznych obiektów Mutex oraz dwuwymiarow¹ tablicê dynamiczn¹ obiektów Mutex. Zadbaj o poprawne zwalnianie pamiêci.
*/


#include <iostream>
#include <cstdlib>
using namespace std;

class Mutex{
private:
    bool mutex;
public:
    bool arr[1];
    Mutex(bool mutex = true){
        this->mutex = mutex;
    }

bool getmutex(){
    return this->mutex;
}

bool lock(){
    if(mutex == false);
    else return mutex = false;
}
bool release(){
    if(mutex == true);
    else return mutex = true;
}

bool state(){
    if(mutex == true) return true;
    else return false;
}
};

int main(){

    Mutex p1[3];
    p1[0] = Mutex(false);
    p1[1] = Mutex(true);
    cout << p1[0].release()<<endl;;
    cout << p1[0].state()<<endl;
    cout << p1[1].lock()<<endl;;
    cout << p1[1].state();

    cout << "\n" << endl;

    Mutex *dyn = new Mutex[3];
    dyn[0] = Mutex(false);
    dyn[1] = Mutex(true);
    cout << dyn[0].release()<<endl;;
    cout << dyn[0].state()<<endl;
    cout << dyn[1].lock()<<endl;;
    cout << dyn[1].state();
    delete[] dyn;

    cout << "\n" << endl;


    Mutex *oct = new Mutex[3];
    Mutex *cos = new Mutex(false);
    Mutex *cos1 = new Mutex(true);

    oct[0] = cos;
    oct[1] = cos1;


    cout << oct[0].release()<<endl;;
    cout << oct[0].state()<<endl;
    cout << oct[1].lock()<<endl;;
    cout << oct[1].state();

    delete cos;
    delete cos1;
    delete[] oct;


    return 0;
}
