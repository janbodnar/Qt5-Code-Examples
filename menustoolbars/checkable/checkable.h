#pragma once

#include <QMainWindow>
#include <QApplication>

class Checkable : public QMainWindow {

  Q_OBJECT

  public:
    Checkable(QWidget *parent = nullptr);

  private slots:
    void toggleStatusbar();

  private:
    QAction *viewst;
};

