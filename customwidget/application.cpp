#include <QVBoxLayout>
#include <QHBoxLayout>
#include "application.h"

Application::Application(QWidget *parent)
    : QFrame(parent) {

  initUI();
}

void Application::initUI() {

  const int MAX_VALUE = 750;
  cur_width = 0;

  slider = new QSlider(Qt::Horizontal , this);
  slider->setMaximum(MAX_VALUE);
  slider->setGeometry(50, 50, 170, 30);

  connect(slider, &QSlider::valueChanged, this, &Application::valueChanged);

  auto *vbox = new QVBoxLayout(this);
  auto *hbox = new QHBoxLayout();

  vbox->addStretch(1);

  widget = new Widget(this);
  hbox->addWidget(widget, 0);

  vbox->addLayout(hbox);

  setLayout(vbox);
}

void Application::valueChanged(int val) {

  cur_width = val;
  widget->repaint();
}

int Application::getCurrentWidth() {

  return cur_width;
}
