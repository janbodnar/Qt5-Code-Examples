#include <QApplication>
#include <QTextStream>
#include "label.h"

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  Label window;

  window.setWindowTitle("QLabel");
  window.show();

  return app.exec();
}
