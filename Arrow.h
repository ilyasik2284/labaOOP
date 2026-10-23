#pragma once

class ArrowA {
private:
    ArrowA();  
    ~ArrowA(); 

public:
    static ArrowA* create();        
    static void Destroy(ArrowA* ptr); 
};



class ArrowB; 
ArrowB* createArrowB();
void destroyArrowB(ArrowB* ptr);

class ArrowB {
private:
    ArrowB();  
    ~ArrowB(); 

    friend ArrowB* createArrowB();
    friend void destroyArrowB(ArrowB* ptr);
};
