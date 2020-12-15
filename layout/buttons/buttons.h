#pragma once

#include <QWidget>
#include <QPushButton>

class Buttons : public QWidget {

  public:
    Buttons(QWidget *parent = nullptr);

  private:
    QPushButton *okBtn;
    QPushButton *applyBtn;
};
