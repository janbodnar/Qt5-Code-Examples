#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include "ledit.h"

Ledit::Ledit(QWidget *parent)
    : QWidget(parent) {

  auto *name = new QLabel("Name:", this);
  name->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

  auto *age = new QLabel("Age:", this);
  age->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

  auto *occupation = new QLabel("Occupation:", this);
  occupation->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

  auto *le1 = new QLineEdit(this);
  auto *le2 = new QLineEdit(this);
  auto *le3 = new QLineEdit(this);

  auto *grid = new QGridLayout();

  grid->addWidget(name, 0, 0);
  grid->addWidget(le1, 0, 1);
  grid->addWidget(age, 1, 0);
  grid->addWidget(le2, 1, 1);
  grid->addWidget(occupation, 2, 0);
  grid->addWidget(le3, 2, 1);

  setLayout(grid);
}
