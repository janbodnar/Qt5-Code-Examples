#pragma once

#include <QWidget>
#include <QSlider>
#include <QLabel>

class Slider : public QWidget {

  Q_OBJECT

  public:
    Slider(QWidget *parent = nullptr);

  private:
    QSlider *slider;
    QLabel *label;
};
