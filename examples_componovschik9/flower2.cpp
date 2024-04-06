#include "flower2.h"
#include "ui_flower2.h"

Flower2::Flower2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Flower2)
{
    ui->setupUi(this);
}

Flower2::~Flower2()
{
    delete ui;
}

void Flower2::setVisible(bool visible)
{
    if(!visible){
        QWidget::setVisible(true);
    } else {
        QWidget::setVisible(visible);
    }
}
