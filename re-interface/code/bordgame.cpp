#include "bordgame.h"
#include "ui_bordgame.h"
#include <QPixmap>

Bordgame::Bordgame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Bordgame)
{
    ui->setupUi(this);
    //QPixmap pic_board("C:\\Users\\USER\\Desktop\\mono\\pic\\Board.png");
    /*int w_b = ui->board->width();
    int h_b = ui->board->height();
    ui->board->setPixmap(pic_board.scaled(w_b,h_b,Qt::KeepAspectRatio));*/
    //ui->board->setPixmap(pic_board.scaled(700,700,Qt::KeepAspectRatio));
}

Bordgame::~Bordgame()
{
    delete ui;
}
