#ifndef FLOWER3_H
#define FLOWER3_H

#include <QWidget>

namespace Ui {
class Flower3;
}

class Flower3 : public QWidget
{
    Q_OBJECT

public:
    explicit Flower3(QWidget *parent = nullptr);
    ~Flower3();

private:
    Ui::Flower3 *ui;

    // QWidget interface
public slots:
    virtual void setVisible(bool visible) override;
};

#endif // FLOWER3_H
