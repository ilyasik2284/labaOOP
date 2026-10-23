#pragma once
#include <string>

class Bow{
private:
    double strength;
    std::string BowStringMat;
    inline static int count = 0;


    friend void showStrength(const Bow& b); 

public:
    Bow(double Inputstrength, std::string InputMat);
    Bow();
    ~Bow();
    void restring(std::string newMaterial);
    void test();
    static int getCount();
};

void showStrength(const Bow& b);
