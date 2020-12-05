#include <QVBoxLayout>
#include <QHBoxLayout>
#include "application.h"

Application::Application(QWidget *parent)
    : QFrame(parent) {

  initUI();
}

void Application::initUI() {

  const int MAX_VALUE = 750;

  slider = new QSlider(Qt::Horizontal , this);
  slider->setMaximum(MAX_VALUE);
  slider->setGeometry(50, 50, 170, 30);

  widget = new Widget(this);
  connect(slider, &QSlider::valueChanged, widget, &Widget::setValue);

  auto *vbox = new QVBoxLayout(this);
  auto *hbox = new QHBoxLayout();

  vbox->addStretch(1);
  hbox->addWidget(widget, 0);
  vbox->addLayout(hbox);

  setLayout(vbox);
}
