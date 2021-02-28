#include "space.h"
#include "ui_space.h"

Space::Space(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Space)
{
    ui->setupUi(this);
}

Space::~Space()
{
    delete ui;
}
