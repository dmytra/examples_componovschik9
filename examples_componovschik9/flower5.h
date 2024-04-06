#ifndef FLOWER5_H
#define FLOWER5_H

#include <QWidget>

namespace Ui {
class Flower5;
}

class Flower5 : public QWidget
{
    Q_OBJECT

public:
    explicit Flower5(QWidget *parent = nullptr);
    ~Flower5();

private:
    Ui::Flower5 *ui;

    // QWidget interface
public slots:
    virtual void setVisible(bool visible) override;
};

#endif // FLOWER5_H
