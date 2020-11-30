#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  QWidget window;

  window.resize(350, 250);
  window.setWindowTitle("ToolTip");
  window.setToolTip("QWidget");
  window.show();

  return app.exec();
}
