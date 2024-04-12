#include "flower3.h"
#include "ui_flower3.h"

Flower3::Flower3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Flower3)
{
    ui->setupUi(this);
}

Flower3::~Flower3()
{
    delete ui;
}

void Flower3::setVisible(bool visible)
{
    if(!visible){
        QWidget::setVisible(true);
    } else {
        QWidget::setVisible(visible);
    }
}
