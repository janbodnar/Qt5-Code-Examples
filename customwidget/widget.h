#pragma once

#include <QFrame>

class Application;

class Widget : public QFrame {

  public:
    Widget(Application *parent = nullptr);

  protected:
    void paintEvent(QPaintEvent *e);
    void drawWidget(QPainter &qp);

  private:
    Application *app;

    static constexpr int DISTANCE = 19;
    static constexpr int LINE_WIDTH = 5;
    static constexpr int DIVISIONS = 10;
    static constexpr float FULL_CAPACITY = 700;
    static constexpr float MAX_CAPACITY = 750;
};
