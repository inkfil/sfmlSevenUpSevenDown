#include<iostream>




class Dice{
    public:
        Dice();
        ~Dice();
        int getDiceFace() const ;
        int rollDice();

    private:
        int DiceFace = 0;
};