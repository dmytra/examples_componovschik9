#include "flowerbg.h"
#include "ui_flowerbg.h"

flowerBg::flowerBg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::flowerBg)
{
    ui->setupUi(this);
}

flowerBg::~flowerBg()
{
    delete ui;
}
