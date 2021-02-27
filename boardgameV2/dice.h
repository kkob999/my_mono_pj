#ifndef DICE_H
#define DICE_H



class Dice {
public:
    Dice();
    virtual ~Dice();
    int dice;
    int roll_dice();

};


#endif // DICE_H

//How to call function
    //Dice roll = Dice();
    //int ans = roll.roll_dice();
//Check in main.cpp
    //std::cout << "result is " <<ans<<std::endl;
