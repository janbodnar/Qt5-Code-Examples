#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include "checkable.h"

Checkable::Checkable(QWidget *parent)
    : QMainWindow(parent) {

  viewst = new QAction("&View statusbar", this);
  viewst->setCheckable(true);
  viewst->setChecked(true);

  QMenu *file = menuBar()->addMenu("&File");
  file->addAction(viewst);

  statusBar();

  connect(viewst, &QAction::triggered, this, &Checkable::toggleStatusbar);
}

void Checkable::toggleStatusbar() {

  if (viewst->isChecked()) {

      statusBar()->show();
  } else {

      statusBar()->hide();
  }
}
