#ifndef FLOWERALL_H
#define FLOWERALL_H

#include <QWidget>

namespace Ui {
class flowerAll;
}

class flowerAll : public QWidget
{
    Q_OBJECT

public:
    explicit flowerAll(QWidget *parent = nullptr);
    ~flowerAll();

private:
    Ui::flowerAll *ui;
};

#endif // FLOWERALL_H
