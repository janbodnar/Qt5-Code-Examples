#include <QApplication>
#include "vertical_box.h"

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  VerticalBox window;

  window.resize(240, 230);
  window.setWindowTitle("VerticalBox");
  window.show();

  return app.exec();
}
