#pragma once

#include <QWidget>
#include <QComboBox>
#include <QLabel>

class ComboBoxEx : public QWidget {

  Q_OBJECT

  public:
    ComboBoxEx(QWidget *parent = nullptr);

  private:
    QComboBox *combo;
    QLabel *label;
};
