#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:\\Users\\USER\\Desktop\\mono\\pic\\world.jpg");
    int w = ui->bg->width();
    int h = ui->bg->height();
    ui->bg->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Play_Button_clicked()
{
    hide();
    Boardgame = new Bordgame(this);
    Boardgame->show();
}
