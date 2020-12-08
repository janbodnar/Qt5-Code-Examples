#pragma once

#include <QMainWindow>
#include <QApplication>

class Toolbar : public QMainWindow {

  Q_OBJECT

  public:
    Toolbar(QWidget *parent = nullptr);
};
