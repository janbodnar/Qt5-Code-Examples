#include <QVBoxLayout>
#include <QPushButton>
#include <QListWidget>
#include "nesting.h"

Layouts::Layouts(QWidget *parent)
    : QWidget(parent) {

  auto *vbox = new QVBoxLayout();
  auto *hbox = new QHBoxLayout(this);

  auto *lw = new QListWidget(this);
  lw->addItem("The Omen");
  lw->addItem("The Exorcist");
  lw->addItem("Notes on a scandal");
  lw->addItem("Fargo");
  lw->addItem("Capote");

  auto *add = new QPushButton("Add", this);
  auto *rename = new QPushButton("Rename", this);
  auto *remove = new QPushButton("Remove", this);
  auto *removeall = new QPushButton("Remove All", this);

  vbox->setSpacing(3);
  vbox->addStretch(1);
  vbox->addWidget(add);
  vbox->addWidget(rename);
  vbox->addWidget(remove);
  vbox->addWidget(removeall);
  vbox->addStretch(1);

  hbox->addWidget(lw);
  hbox->addSpacing(15);
  hbox->addLayout(vbox);

  setLayout(hbox);
}
