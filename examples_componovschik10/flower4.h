#ifndef FLOWER4_H
#define FLOWER4_H

#include <QWidget>

namespace Ui {
class Flower4;
}

class Flower4 : public QWidget
{
    Q_OBJECT

public:
    explicit Flower4(QWidget *parent = nullptr);
    ~Flower4();

private:
    Ui::Flower4 *ui;

    // QWidget interface
public slots:
    virtual void setVisible(bool visible) override;
};

#endif // FLOWER4_H
