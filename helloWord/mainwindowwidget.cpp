#include "mainwindowwidget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    ,showDataWidget(new QMainWindow(this))
{

}

Widget::~Widget()
{

}
