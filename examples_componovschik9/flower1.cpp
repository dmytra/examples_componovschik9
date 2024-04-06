#include "flower1.h"
#include "ui_flower1.h"

Flower1::Flower1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Flower1)
{
    ui->setupUi(this);
}

Flower1::~Flower1()
{
    delete ui;
}

void Flower1::setVisible(bool visible)
{
    if(!visible){
        QWidget::setVisible(true);
    } else {
        QWidget::setVisible(visible);
    }
}
