#pragma once

#include <QWidget>
#include <QSlider>
#include <QFrame>
#include "widget.h"

class Application : public QFrame {

  Q_OBJECT

  public:
    Application(QWidget *parent = nullptr);
    int getCurrentWidth();

  public slots:
    void valueChanged(int);

  private:
    QSlider *slider;
    Widget *widget;
    int cur_width;

    void initUI();
};
