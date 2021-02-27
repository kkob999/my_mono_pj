#include "dice.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


Dice::Dice(){
    side =6;
}

int Dice::rollDice(){
    int roll=0;
    roll =rand()%side +1;
    return roll;
}
