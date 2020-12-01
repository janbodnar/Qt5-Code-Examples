#pragma once

#include <QWidget>
#include <QLabel>

class Label : public QWidget {

  public:
    Label(QWidget *parent = nullptr);

  private:
    QLabel *label;
};
