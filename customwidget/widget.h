#pragma once

#include <QFrame>

class Widget : public QFrame {

  Q_OBJECT;

  public:
    Widget(QWidget *parent = nullptr);

  public slots:
    void setValue(int);

  protected:
    void paintEvent(QPaintEvent *e);
    void drawWidget(QPainter &qp);

  private:
    int cur_width;

    static constexpr int DISTANCE = 19;
    static constexpr int LINE_WIDTH = 5;
    static constexpr int DIVISIONS = 10;
    static constexpr float FULL_CAPACITY = 700;
    static constexpr float MAX_CAPACITY = 750;
};
