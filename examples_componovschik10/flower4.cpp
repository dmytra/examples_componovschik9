#include "flower4.h"
#include "ui_flower4.h"

Flower4::Flower4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Flower4)
{
    ui->setupUi(this);
}

Flower4::~Flower4()
{
    delete ui;
}

void Flower4::setVisible(bool visible)
{
    if(!visible){
        QWidget::setVisible(true);
    } else {
        QWidget::setVisible(visible);
    }
}
