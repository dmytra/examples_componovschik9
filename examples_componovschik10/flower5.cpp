#include "flower5.h"
#include "ui_flower5.h"

Flower5::Flower5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Flower5)
{
    ui->setupUi(this);
}

Flower5::~Flower5()
{
    delete ui;
}

void Flower5::setVisible(bool visible)
{
    if(!visible){
        QWidget::setVisible(true);
    } else {
        QWidget::setVisible(visible);
    }
}
