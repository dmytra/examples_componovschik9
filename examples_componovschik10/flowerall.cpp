#include "flowerall.h"
#include "ui_flowerall.h"

flowerAll::flowerAll(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::flowerAll)
{
    ui->setupUi(this);
}

flowerAll::~flowerAll()
{
    delete ui;
}
