#ifndef FLOWERBG_H
#define FLOWERBG_H

#include <QWidget>

namespace Ui {
class flowerBg;
}

class flowerBg : public QWidget
{
    Q_OBJECT

public:
    explicit flowerBg(QWidget *parent = nullptr);
    ~flowerBg();

private:
    Ui::flowerBg *ui;
};

#endif // FLOWERBG_H
