#pragma once

#include <QWidget>
#include <QSpinBox>

class SpinBox : public QWidget {

  Q_OBJECT

  public:
    SpinBox(QWidget *parent = nullptr);

  private:
    QSpinBox *spinbox;
};
