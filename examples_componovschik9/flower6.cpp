#include "flower6.h"
#include "ui_flower6.h"

#include "widget.h"

Flower6::Flower6(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Flower6)
{
    ui->setupUi(this);
}

Flower6::~Flower6()
{
    delete ui;
}

void Flower6::setVisible(bool visible)
{
    if(!visible){
        QWidget::setVisible(true);
    } else {
        QWidget::setVisible(visible);
    }
}

