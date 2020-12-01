#include <QApplication>
#include "application.h"

int main(int argc, char *argv[]) {
    
  QApplication app(argc, argv);
  Application window;

  window.resize(370, 200);
  window.setWindowTitle("The Burning widget");
  window.show();

  return app.exec();
}
