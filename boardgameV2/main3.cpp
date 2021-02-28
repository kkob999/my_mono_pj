#include "main3.h"
#include "ui_main3.h"
#include<QPixmap>
#include<Qt>
#include <QStyle>
#include<iostream>
#include<string>
#include"space.h"
#include"ui_space.h"
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
int main3::randomDice(){
    int roll=0;
    roll =rand()%6 +1;
    return roll;
}

//Add code
int main3::show_space(int num_sp){
    
        space = new Space();
        space->show();
        return num_sp;
    
}

int P1=0;
void main3::on_random_clicked()
{
    int roll=0;
    roll=randomDice();
    //int P2=1;
    //ui->walk1->setGeometry(730,680,35,35);
    if(P1==0){
        if(roll==1){
            ui->roll->setStyleSheet("background-image: url(:/dice1.png);");
            ui->walk1->move(608,680);
        }
        else if(roll==2){
            ui->roll->setStyleSheet("background-image: url(:/dice2.png);");
            ui->walk1->setGeometry(508,680,35,35);
        }
       else if(roll==3){
            ui->roll->setStyleSheet("background-image: url(:/dice3.png);");
            ui->walk1->setGeometry(408,680,35,35);
        }
        else if(roll==4){
            ui->roll->setStyleSheet("background-image: url(:/dice4.png);");
            ui->walk1->setGeometry(308,680,35,35);
        }
        else if(roll==5){
            ui->roll->setStyleSheet("background-image: url(:/dice5.png);");
            ui->walk1->setGeometry(208,680,35,35);
        }
        else if(roll==6){
            ui->roll->setStyleSheet("background-image: url(:/dice6.png);");
            ui->walk1->setGeometry(85,680,35,35);
        }
        P1=1;
    }
    else if(P1==1){
        if(roll==1){
            ui->roll->setStyleSheet("background-image: url(:/dice1.png);");
            ui->walk2->setGeometry(608,730,35,35);
        }
        else if(roll==2){
            ui->roll->setStyleSheet("background-image: url(:/dice2.png);");
            ui->walk2->setGeometry(508,730,35,35);
        }
       else if(roll==3){
            ui->roll->setStyleSheet("background-image: url(:/dice3.png);");
            ui->walk2->setGeometry(408,730,35,35);
        }
        else if(roll==4){
            ui->roll->setStyleSheet("background-image: url(:/dice4.png);");
            ui->walk2->setGeometry(308,730,35,35);
        }
        else if(roll==5){
            ui->roll->setStyleSheet("background-image: url(:/dice5.png);");
            ui->walk2->setGeometry(208,730,35,35);
        }
        else if(roll==6){
            ui->roll->setStyleSheet("background-image: url(:/dice6.png);");
            ui->walk2->setGeometry(85,730,35,35);
        }
        P1=2;
    }
    else if(P1==2){
        if(roll==1){
            ui->roll->setStyleSheet("background-image: url(:/dice1.png);");
            ui->walk1->setGeometry(100,578,35,35);
        }
        else if(roll==2){
            ui->roll->setStyleSheet("background-image: url(:/dice2.png);");
            ui->walk1->setGeometry(100,478,35,35);
        }
       else if(roll==3){
            ui->roll->setStyleSheet("background-image: url(:/dice3.png);");
            ui->walk1->setGeometry(100,378,35,35);
        }
        else if(roll==4){
            ui->roll->setStyleSheet("background-image: url(:/dice4.png);");
            ui->walk1->setGeometry(100,278,35,35);
        }
        else if(roll==5){
            ui->roll->setStyleSheet("background-image: url(:/dice5.png);");
            ui->walk1->setGeometry(100,178,35,35);
        }
        else if(roll==6){
            ui->roll->setStyleSheet("background-image: url(:/dice6.png);");
            ui->walk1->setGeometry(100,55,35,35);
        }
        P1=3;
    }
    else if(P1==3){
        if(roll==1){
            ui->roll->setStyleSheet("background-image: url(:/dice1.png);");
            ui->walk2->setGeometry(50,578,35,35);
        }
        else if(roll==2){
            ui->roll->setStyleSheet("background-image: url(:/dice2.png);");
            ui->walk2->setGeometry(50,478,35,35);
        }
       else if(roll==3){
            ui->roll->setStyleSheet("background-image: url(:/dice3.png);");
            ui->walk2->setGeometry(50,378,35,35);
        }
        else if(roll==4){
            ui->roll->setStyleSheet("background-image: url(:/dice4.png);");
            ui->walk2->setGeometry(50,278,35,35);
        }
        else if(roll==5){
            ui->roll->setStyleSheet("background-image: url(:/dice5.png);");
            ui->walk2->setGeometry(50,178,35,35);
        }
        else if(roll==6){
            ui->roll->setStyleSheet("background-image: url(:/dice6.png);");
            ui->walk2->setGeometry(50,55,35,35);
        }
        P1=4;
    }
    else if(P1==4){
        if(roll==1){
            ui->roll->setStyleSheet("background-image: url(:/dice1.png);");
            ui->walk1->setGeometry(208,70,35,35);
        }
        else if(roll==2){
            ui->roll->setStyleSheet("background-image: url(:/dice2.png);");
            ui->walk1->setGeometry(308,70,35,35);
        }
       else if(roll==3){
            ui->roll->setStyleSheet("background-image: url(:/dice3.png);");
            ui->walk1->setGeometry(408,70,35,35);
        }
        else if(roll==4){
            ui->roll->setStyleSheet("background-image: url(:/dice4.png);");
            ui->walk1->setGeometry(508,70,35,35);
        }
        else if(roll==5){
            ui->roll->setStyleSheet("background-image: url(:/dice5.png);");
            ui->walk1->setGeometry(608,70,35,35);
        }
        else if(roll==6){
            ui->roll->setStyleSheet("background-image: url(:/dice6.png);");
            ui->walk1->setGeometry(730,70,35,35);
        }
        P1=5;
    }
    else if(P1==5){
        if(roll==1){
            ui->roll->setStyleSheet("background-image: url(:/dice1.png);");
            ui->walk2->setGeometry(208,20,35,35);
        }
        else if(roll==2){
            ui->roll->setStyleSheet("background-image: url(:/dice2.png);");
            ui->walk2->setGeometry(308,20,35,35);
        }
       else if(roll==3){
            ui->roll->setStyleSheet("background-image: url(:/dice3.png);");
            ui->walk2->setGeometry(408,20,35,35);
        }
        else if(roll==4){
            ui->roll->setStyleSheet("background-image: url(:/dice4.png);");
            ui->walk2->setGeometry(508,20,35,35);
        }
        else if(roll==5){
            ui->roll->setStyleSheet("background-image: url(:/dice5.png);");
            ui->walk2->setGeometry(608,20,35,35);
        }
        else if(roll==6){
            ui->roll->setStyleSheet("background-image: url(:/dice6.png);");
            ui->walk2->setGeometry(730,20,35,35);
        }
        P1=6;
    }
    else if(P1==6){
        if(roll==1){
            ui->roll->setStyleSheet("background-image: url(:/dice1.png);");
            ui->walk1->setGeometry(710,478,35,35);
        }
        else if(roll==2){
            ui->roll->setStyleSheet("background-image: url(:/dice2.png);");
            ui->walk1->setGeometry(710,378,35,35);
        }
       else if(roll==3){
            ui->roll->setStyleSheet("background-image: url(:/dice3.png);");
            ui->walk1->setGeometry(710,278,35,35);
        }
        else if(roll==4){
            ui->roll->setStyleSheet("background-image: url(:/dice4.png);");
            ui->walk1->setGeometry(710,178,35,35);
        }
        else if(roll==5){
            ui->roll->setStyleSheet("background-image: url(:/dice5.png);");
            ui->walk1->setGeometry(710,78,35,35);
        }
        else if(roll==6){
            ui->roll->setStyleSheet("background-image: url(:/dice6.png);");
            ui->walk1->setGeometry(730,680,35,35);
        }
        P1=7;
    }
    else if(P1==7){
        if(roll==1){
            ui->roll->setStyleSheet("background-image: url(:/dice1.png);");
            ui->walk2->setGeometry(760,478,35,35);
        }
        else if(roll==2){
            ui->roll->setStyleSheet("background-image: url(:/dice2.png);");
            ui->walk2->setGeometry(760,378,35,35);
        }
       else if(roll==3){
            ui->roll->setStyleSheet("background-image: url(:/dice3.png);");
            ui->walk2->setGeometry(760,278,35,35);
        }
        else if(roll==4){
            ui->roll->setStyleSheet("background-image: url(:/dice4.png);");
            ui->walk2->setGeometry(760,178,35,35);
        }
        else if(roll==5){
            ui->roll->setStyleSheet("background-image: url(:/dice5.png);");
            ui->walk2->setGeometry(760,78,35,35);
        }
        else if(roll==6){
            ui->roll->setStyleSheet("background-image: url(:/dice6.png);");
            ui->walk2->setGeometry(730,730,35,35);
        }
        P1=0;

    }
    
    //Add here
    
    //show_space(); <-put variable space in it


}






