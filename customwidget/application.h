#pragma once

#include <QWidget>
#include <QSlider>
#include <QFrame>
#include "widget.h"

class Application : public QFrame {

  Q_OBJECT

  public:
    Application(QWidget *parent = nullptr);

  private:
    QSlider *slider;
    Widget *widget;

    void initUI();
};
