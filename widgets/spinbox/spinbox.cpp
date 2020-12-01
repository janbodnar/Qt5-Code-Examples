#include <QHBoxLayout>
#include <QLabel>
#include "spinbox.h"

SpinBox::SpinBox(QWidget *parent)
    : QWidget(parent) {

  auto *hbox = new QHBoxLayout(this);
  hbox->setSpacing(15);

  spinbox = new QSpinBox(this);
  auto *lbl = new QLabel("0", this);

  hbox->addWidget(spinbox);
  hbox->addWidget(lbl);

  connect(spinbox, qOverload<int>(&QSpinBox::valueChanged),
    lbl, qOverload<int>(&QLabel::setNum));
}
