/*
Napisz klas� Mutex, kt�rej obiekty w ka�dym momencie s� w jednym z dw�ch stan�w wolny lub zaj�ty. Bezpo�rednio po utworzeniu obiekt typu Mutex powinien by� w stanie wolny. Klasa powinna udost�pnia� nast�puj�ce publiczne metody:
- lock(), kt�rej wywo�anie zmienia stan mutexa z wolny na zaj�ty (w przypadku, gdy mutex jest ju� w stanie zaj�ty, metoda nie powinna zmienia� jego stanu),
- release(), kt�rej wywo�anie zmienia stan mutexa z zaj�ty na wolny (w przypadku, gdy jest ju� w stanie wolny, metoda nie powinna zmienia� jego stanu),
- state() zwracaj�c� warto�� true gdy mutex jest w stanie wolny i false w przeciwnym wypadku.
Zadbaj o odpowiedni� hermetyzacj� klasy i o prawid�ow� inicjalizacj� obiekt�w.
W programie g��wnym stw�rz dynamiczn� tablic� obiekt�w Mutex, automatyczn� tablic� dynamicznych obiekt�w Mutex, dynamiczn� tablic� dynamicznych obiekt�w Mutex oraz dwuwymiarow� tablic� dynamiczn� obiekt�w Mutex. Zadbaj o poprawne zwalnianie pami�ci.
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
