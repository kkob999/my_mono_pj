#ifndef BORDGAME_H
#define BORDGAME_H

#include <QDialog>

namespace Ui {
class Bordgame;
}

class Bordgame : public QDialog
{
    Q_OBJECT

public:
    explicit Bordgame(QWidget *parent = nullptr);
    ~Bordgame();

private:
    Ui::Bordgame *ui;
};

#endif // BORDGAME_H
