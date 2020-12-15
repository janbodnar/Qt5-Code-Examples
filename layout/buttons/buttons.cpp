#include <QVBoxLayout>
#include <QHBoxLayout>
#include "buttons.h"

Buttons::Buttons(QWidget *parent)
    : QWidget(parent) {

  auto *vbox = new QVBoxLayout(this);
  auto *hbox = new QHBoxLayout();

  okBtn = new QPushButton("OK", this);
  applyBtn = new QPushButton("Apply", this);

  hbox->addWidget(okBtn, 1, Qt::AlignRight);
  hbox->addWidget(applyBtn, 0);

  vbox->addStretch(1);
  vbox->addLayout(hbox);
}
