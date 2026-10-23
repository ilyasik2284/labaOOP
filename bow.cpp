#include "bow.h"
#include <iostream>

using namespace std;

Bow::Bow(double Inputstrength, string InputMat){
    count++;
    strength = Inputstrength;
    BowStringMat = InputMat;
}

Bow::Bow(){
    count++;
    strength = 0;
    BowStringMat = "";
}

Bow::~Bow(){
    count--;
    cout << "Destructor was called" << endl;
}

void Bow::restring(std::string newMaterial){
    BowStringMat = newMaterial;
}

void Bow::test(){
    cout << "Тест лука, сила и материал: " << strength << "и " << BowStringMat << endl;
    if(strength > 10){
        cout << "Сила больше 10, значит лук сильный" << endl;
    } else {
        cout << "Сила меньше или равна 10, значит лук слабый" << endl;
    }
}

int Bow::getCount(){
    return count;
}

void showStrength(const Bow& b) {
    cout << "Вызов friend функции: Сила лука равна " << b.strength << endl;
}
