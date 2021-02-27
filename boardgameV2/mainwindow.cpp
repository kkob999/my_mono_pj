#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "main2.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //move(QGuiApplication::screens().at(0)->geometry().center() - frameGeometry().center());
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    this->hide();
    mymain2 = new main2(this);
    mymain2->show();
}

void MainWindow::on_quit_clicked()
{
    this->hide();
}

