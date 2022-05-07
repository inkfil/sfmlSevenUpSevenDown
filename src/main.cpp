#include<include/Common.hpp>
#include<include/Dice.hpp>

int main(const int argc, const char** argv){
    int face1 = 0;
    int face2 = 0;
    int yourBet = 8;
    int faceAdd = 0;
    Dice dice;
    dice.rollDice();
    face1 = dice.getDiceFace();
    dice.rollDice();
    face2 = dice.getDiceFace();
    // if(yourBet > 13 && yourBet < 0){
    //     std::cerr<<"please enter a correct bet value"<<std::endl;
    // }
    faceAdd = face1 + face2;
    std::cout<<"YourBet: "<<yourBet<<std::endl;
    std::cout<<"faces: [face01: "<<face1<<"], [face02: "<<face2<<"]."<<std::endl;
    std::cout<<"facesAdd: "<<faceAdd<<std::endl;
    if((face1 + face2) == yourBet){
        std::cout<<"you Won!!!!"<<std::endl;
    }

    if((face1 + face2) > yourBet){
        std::cout<<"you Loose :( , your bet was less than faces."<<std::endl;
    }

    if((face1 + face2) < yourBet){
        std::cout<<"you Loose :( , your bet was more than faces."<<std::endl;
    }

    return 0;
}