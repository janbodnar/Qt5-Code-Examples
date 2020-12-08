#include "skeleton.h"

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  Skeleton window;

  window.resize(450, 350);
  window.setWindowTitle("Application skeleton");
  window.show();

  return app.exec();
}
