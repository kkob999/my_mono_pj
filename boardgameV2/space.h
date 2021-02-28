#ifndef SPACE_H
#define SPACE_H

#include <QDialog>

namespace Ui {
class Space;
}

class Space : public QDialog
{
    Q_OBJECT

public:
    explicit Space(QWidget *parent = nullptr);
    ~Space();

private:
    Ui::Space *ui;
};

#endif // SPACE_H
