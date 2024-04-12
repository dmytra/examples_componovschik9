#ifndef FLOWER6_H
#define FLOWER6_H

#include <QWidget>

namespace Ui {
class Flower6;
}

class Flower6 : public QWidget
{
    Q_OBJECT

public:
    explicit Flower6(QWidget *parent = nullptr);
    ~Flower6();

private:
    Ui::Flower6 *ui;

    // QWidget interface
public slots:
    virtual void setVisible(bool visible) override;

};

#endif // FLOWER6_H
