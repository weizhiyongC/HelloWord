﻿#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMainWindow>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private:
    QMainWindow *showDataWidget;

};

#endif // WIDGET_H
