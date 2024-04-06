#ifndef FLOWER1_H
#define FLOWER1_H

#include <QWidget>

namespace Ui {
class Flower1;
}

class Flower1 : public QWidget
{
    Q_OBJECT

public:
    explicit Flower1(QWidget *parent = nullptr);
    ~Flower1();

private:
    Ui::Flower1 *ui;

    // QWidget interface
public slots:
    virtual void setVisible(bool visible) override;
};

#endif // FLOWER1_H
