#ifndef ACTION_H
#define ACTION_H
#include "main3.h"
#include "ui_main3.h"
#include<QDialog>

namespace Ui {
class Action;
}

class Action : public QDialog
{
    Q_OBJECT

public:
    explicit Action(QDialog *parent = nullptr);
    ~Action();


    //Action();
    //virtual ~Action();
    
    int space;
    int movement();


    Ui::Action *ui;
};

#endif // ACTION_H
