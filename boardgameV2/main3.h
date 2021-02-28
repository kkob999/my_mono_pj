#ifndef MAIN3_H
#define MAIN3_H

#include <QDialog>

namespace Ui {
class main3;
}

class main3 : public QDialog
{
    Q_OBJECT

public:
    explicit main3(QWidget *parent = nullptr);
    ~main3();
    int randomDice();
    int show_space(int num_sp);
    

private slots:
    void on_random_clicked();


private:
    Ui::main3 *ui;
    Space *space;
};

#endif // MAIN3_H
