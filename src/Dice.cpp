#include<include/Dice.hpp>

Dice::Dice(){
    // std::logic_error("not implemented yet.");

    // To Do's
    //  1. generate seed for random number.
    srand(time(NULL));
    // std::cout<<"dice created."<<std::endl;
}

Dice::~Dice(){
    // std::logic_error("not implemented yet.");
    // std::cout<<"dice destroyed."<<std::endl;
}

int Dice::getDiceFace() const {
    // std::logic_error("not implemented yet.");
    return DiceFace;
}

int Dice::rollDice(){
    // std::logic_error("not implemented yet.");

    // To Do's
    //  1. get random number between 0 and 7 [exxclusive of 0 and 7]
    DiceFace = rand() % 7;
    return DiceFace;
}