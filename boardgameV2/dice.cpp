#include "dice.h"
#include "bordgame.h"
#include<cstdlib>
#include<ctime>
#include<iostream>
Dice::Dice(){}
Dice::~Dice(){}

int Dice::roll_dice(){
    srand(time(0));
    dice = rand() % 6 + 1;
    return dice;
}
