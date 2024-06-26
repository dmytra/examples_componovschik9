#include "widget.h"
#include "ui_widget.h"

#include <QScroller>
#include <QDebug>
#include <QGraphicsBlurEffect>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QScroller::grabGesture(ui->scrollArea, QScroller::LeftMouseButtonGesture);
    ui->widget->setMinimumHeight(844);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn); // включим скроллбар по вертикали

    //ui->scrollArea->setStyleSheet(" background: transparent; width: 19px; padding: 0 0 20px 0; margin: 20px 0 20px 0;");
//QScrollBar:vertical {
//    background: transparent;
//    width: 19px;
//    padding: 0 0 20px 0;
//    margin: 20px 0 20px 0;
//    }
//    QScrollBar::handle:vertical {
//    background: transparent;
//        border-image: url(scrollbar.png) 4 0 4 0 repeat;
//        border-top: 4px;
//        border-bottom: 4px;
//        min-height: 39px;
//    }
//    QScrollBar::add-line:vertical {
//        border-top: solid 5px transparent;
//    background: none;
//    height: 20px;
//        subcontrol-position: bottom;
//        subcontrol-origin: padding;
//    }
//    QScrollBar::sub-line:vertical {
//    border: none;
//    background: none;
//    height: 20px;
//        subcontrol-position: top;
//        subcontrol-origin: margin;
//    }
//    QScrollBar::up-arrow:vertical{
//    image: url(uparrow.png);
//    }
//    QScrollBar::down-arrow:vertical{
//    image: url(downarrow.png);
//    }

    flower1 = new Flower1();
    flower2 = new Flower2();
    flower3 = new Flower3();
    flower4 = new Flower4();
    flower5 = new Flower5();
    flower6 = new Flower6();
    flowerall = new flowerAll();
    flowerbg = new flowerBg();

    init();
}

void Widget::init()
{
    prepereWidget();

    if (flowerbg == nullptr) {
        flowerbg = new flowerBg(ui->widget_2);
        qDebug() << "flowerbg";
    }

    if (flowerall == nullptr) {
        flowerall = new flowerAll(ui->widget);
        qDebug() << "flowerall";
    }

    QGraphicsBlurEffect* p_blur = new QGraphicsBlurEffect;
    p_blur->setBlurRadius(12);
    p_blur->setBlurHints(QGraphicsBlurEffect::QualityHint);
    ui->widget_2->setGraphicsEffect(p_blur);

    flowerall->show();
    flowerbg->show();
}

void Widget::prepereWidget(){


    if (flower1 != nullptr) {
        delete flower1; flower1 = nullptr;
        qDebug() << "DEL flower1";
    }

    if (flower2 != nullptr) {
        delete flower2; flower2 = nullptr;
        qDebug() << "DEL flower2";
    }

    if (flower3 != nullptr) {
        delete flower3; flower3 = nullptr;
        qDebug() << "DEL flower3";
    }

    if (flower4 != nullptr) {
        delete flower4; flower4 = nullptr;
        qDebug() << "DEL flower4";
    }

    if (flower5 != nullptr) {
        delete flower5; flower5 = nullptr;
        qDebug() << "DEL flower5";
    }

    if (flower6 != nullptr) {
        delete flower6; flower6 = nullptr;
        qDebug() << "DEL flower6";
    }

    if (flowerall != nullptr) {
        delete flowerall; flowerall = nullptr;
        qDebug() << "DEL flowerall";
    }

    if (flowerbg != nullptr) {
        delete flowerbg; flowerbg = nullptr;
        qDebug() << "DEL flowerbg";
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_flower1_clicked()
{
    prepereWidget();

    if (flower1 == nullptr) {
        flower1 = new Flower1(ui->widget);
        qDebug() << "flower1";
        flower1->show();
    }
}

void Widget::on_flower2_clicked()
{
    prepereWidget();

    if (flower2 == nullptr) {
        flower2 = new Flower2(ui->widget);
        qDebug() << "flower2";
        flower2->show();
    }
}

void Widget::on_flower3_clicked()
{
    prepereWidget();

    if (flower3 == nullptr) {
        flower3 = new Flower3(ui->widget);
        qDebug() << "flower3";
        flower3->show();
    }
}

void Widget::on_flower4_clicked()
{
    prepereWidget();

    if (flower4 == nullptr) {
        flower4 = new Flower4(ui->widget);
        qDebug() << "flower4";
        flower4->show();
    }
}

void Widget::on_flower5_clicked()
{
    prepereWidget();

    if (flower5 == nullptr) {
        flower5 = new Flower5(ui->widget);
        qDebug() << "flower5";
        flower5->show();
    }
}

void Widget::on_flower6_clicked()
{
    prepereWidget();

    if (flower6 == nullptr) {
        flower6 = new Flower6(ui->widget);
        qDebug() << "flower6";
        flower6->show();
    }
}

void Widget::on_pushButton_clicked()
{
    init();
}

