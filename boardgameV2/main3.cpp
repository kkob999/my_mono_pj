#include "main3.h"
#include "ui_main3.h"
#include "action.h"
#include "dice.h"
#include<QPixmap>
#include<Qt>

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

void main3::on_random_clicked()
{
    int roll=0;
    roll =rand()%6 +1;

    if(roll==1){
        ui->roll->setStyleSheet("background-image: url(:/dice1.png);");
    }
    else if(roll==2){
        ui->roll->setStyleSheet("background-image: url(:/dice2.png);");
    }
    else if(roll==3){
        ui->roll->setStyleSheet("background-image: url(:/dice3.png);");
    }
    else if(roll==4){
        ui->roll->setStyleSheet("background-image: url(:/dice4.png);");
    }
    else if(roll==5){
        ui->roll->setStyleSheet("background-image: url(:/dice5.png);");
    }
    else if(roll==6){
        ui->roll->setStyleSheet("background-image: url(:/dice6.png);");
    }
}


//walking  setGeometry()











