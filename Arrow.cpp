#include <iostream>
#include "Arrow.h" 

using namespace std;

ArrowA::ArrowA() {
    cout << "Конструктор ArrowA вызван" << endl;
}

ArrowA::~ArrowA() {
    cout << "Деструктор ArrowA вызван" << endl;
}

ArrowA* ArrowA::create() {
    return new ArrowA();
}

void ArrowA::Destroy(ArrowA* ptr) {
    delete ptr;
}


ArrowB::ArrowB() {
    cout << "Конструктор ArrowB вызван!" << endl;
}

ArrowB::~ArrowB() {
    cout << "Деструктор ArrowB вызван!" << endl;
}

ArrowB* createArrowB() {
    return new ArrowB(); 
}

void destroyArrowB(ArrowB* ptr) {
    delete ptr; 
}
