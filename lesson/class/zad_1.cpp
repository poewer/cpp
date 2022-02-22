/*
Zaliczenie z pewnego przedmiotu wygl¹da tak, ¿e studenci pisz¹ dwa kolokwia, oba za 50 punktów. Ocena dostateczna przyznawana jest w przedziale (50-60] punktów, i roœnie o po³owê oceny co 10 punktów a¿ do 100. Student, który nie otrzyma zaliczenia, mo¿e poprawiæ jedno z kolokwiów ale wtedy mo¿e otrzymaæ co najwy¿ej ocenê dostateczn¹. Zak³adamy, ¿e student, który nie otrzyma zaliczenia, zawsze bêdzie poprawia³ kolokwium, które gorzej napisa³.
Napisz klasê, w której znajduje siê: numer indeksu studenta, wynik pierwszego kolokwium, wynik drugiego kolokwium i wynik poprawy. Numer indeksu musi byæ przekazany w konstruktorze klasy.  Wszystkie pola tej klasy maj¹ byæ prywatne.
Napisz funkcjê, która przyjmie tablicê obiektów takich klas a zwróci œredni¹ ocen (nie punktów) zdobytych z tego przedmiotu. Tablicê w wynikami cz¹stkowymi zainicjuj pseudolosowo.
*/



#include <iostream>

using namespace std;

class Kolos{
private:
    int index;
    float kolokwium_A;
    float kolokwium_B;
    float poprawka;

public:
        char arr[3];
        Kolos(){}
        Kolos(int index, float kolokwium_A = 0.0f, float kolokwium_B = 0.0f, float poprawka = 0.0f){
        this->index=index;
        this->kolokwium_A=kolokwium_A;
        this->kolokwium_B=kolokwium_B;
        this->poprawka=poprawka;
    }

int get_index(){
    return this->index;
}

float getkolokwium_A(){
    return this->kolokwium_A;
}
float getkolokwium_B(){
    return this->kolokwium_B;
}

float getpoprawka(){
    return this->poprawka;
}

void ptr(){
    cout<< index << " " << kolokwium_A << " " << kolokwium_B <<"\n";
}

/*
float count_avg(float a, float b){
    a = kolokwium_A;
    b = kolokwium_B;
    float sum = a+b;
    float ocena = 0;

    if(sum > 50 && sum <=60) ocena = 3.0f;
    else if(sum > 60 && sum <=70) ocena  = 3.5f;
    else if(sum > 70 && sum <=80) ocena  = 4.0f;
    else if(sum > 80 && sum <=90) ocena  = 4.5f;
    else if(sum > 90 && sum <=100) ocena  = 5.0f;

    return  ocena;
}

*/

};

float count_avg(Kolos arr[], int n){
    float sum = 0;
    float ocena = 0;

    for(int i = 0; i < n; i++) sum = arr[i].getkolokwium_A() + arr[i].getkolokwium_B();

    if(sum > 50 && sum <=60) ocena = 3.0f;
    else if(sum > 60 && sum <=70) ocena  = 3.5f;
    else if(sum > 70 && sum <=80) ocena  = 4.0f;
    else if(sum > 80 && sum <=90) ocena  = 4.5f;
    else if(sum > 90 && sum <=100) ocena  = 5.0f;

    return  ocena;
}

int main(){
    Kolos id[3];
    id[0] = Kolos(1,25.0f,40.0f);
    id[1] = Kolos(2,30.0f,50.f);
    id[2] = Kolos(3,15.0f,80.3f);

    for(int i=0; i < 3; i++) id[i].ptr();
    cout << "\n";
    for(int i = 1; i <= 3; i++) cout<< count_avg(id,i) << "\n";
    return 0;
}
