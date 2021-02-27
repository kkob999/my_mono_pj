#ifndef MAIN3_H
#define MAIN3_H

#include <QDialog>
#include "action.h"

namespace Ui {
class main3;
}

class main3 : public QDialog
{
    Q_OBJECT

public:
    explicit main3(QWidget *parent = nullptr);
    ~main3();

private slots:
    void on_random_clicked();
    //void actionWalk(int p1,int p2,int money);
private:
    Ui::main3 *ui;
};

#endif // MAIN3_H
