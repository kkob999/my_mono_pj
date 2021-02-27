#include "main3.h"
#include "ui_main3.h"
#include<iostream>
#include "dice.h"
#include "action.h"

using namespace std;

main3::main3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::main3)
{
    ui->setupUi(this);
}

main3::~main3()
{
    delete ui;
}

void main3::on_random_clicked(){
    Dice random= Dice();
    int roll =random.roll_dice();

    //rollDice=1
    if(roll==1){
        ui->roll->setStyleSheet("background-image: url(:/dice1.png);");
    }
    //rollDice=2
    else if(roll==2){
        ui->roll->setStyleSheet("background-image: url(:/dice2.png);");
    }
    //rollDice=3
    else if(roll==3){
         ui->roll->setStyleSheet("background-image: url(:/dice3.png);");
    }
    //rollDice=4
    else if(roll==4){
         ui->roll->setStyleSheet("background-image: url(:/dice4.png);");
    }
    //rollDice=5
    else if(roll==5){
         ui->roll->setStyleSheet("background-image: url(:/dice5.png);");
    }
    //rollDice=6
    else if(roll==6){
         ui->roll->setStyleSheet("background-image: url(:/dice6.png);");
    }
}

