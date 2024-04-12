#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "flower1.h"
#include "flower2.h"
#include "flower3.h"
#include "flower4.h"
#include "flower5.h"
#include "flower6.h"
#include "flowerall.h"
#include "flowerbg.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    void init();
    void prepereWidget();

    Flower1* flower1;
    Flower2* flower2;
    Flower3* flower3;
    Flower4* flower4;
    Flower5* flower5;
    Flower6* flower6;
    flowerAll* flowerall;
    flowerBg* flowerbg;
    static int numWidget;
    ~Widget();

private slots:
      void on_flower1_clicked();

//    void on_flower2_clicked();

//    void on_flower3_clicked();

//    void on_flower4_clicked();

//    void on_flower5_clicked();

//    void on_flower6_clicked();

    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
