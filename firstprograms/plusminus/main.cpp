#include "plusminus.h"

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  PlusMinus window;

  window.resize(300, 190);
  window.setWindowTitle("Plus minus");
  window.show();

  return app.exec();
}
