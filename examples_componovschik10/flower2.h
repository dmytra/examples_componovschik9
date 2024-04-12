#ifndef FLOWER2_H
#define FLOWER2_H

#include <QWidget>

namespace Ui {
class Flower2;
}

class Flower2 : public QWidget
{
    Q_OBJECT

public:
    explicit Flower2(QWidget *parent = nullptr);
    ~Flower2();

private:
    Ui::Flower2 *ui;

    // QWidget interface
public slots:
    virtual void setVisible(bool visible) override;
};

#endif // FLOWER2_H
