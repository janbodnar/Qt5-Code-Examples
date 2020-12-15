#include <QApplication>
#include <QDesktopWidget>
#include <QTextEdit>

class Absolute : public QWidget {

 public:
     Absolute(QWidget *parent = nullptr);
};

Absolute::Absolute(QWidget *parent)
    : QWidget(parent) {

  auto *ledit = new QTextEdit(this);
  ledit->setGeometry(5, 5, 200, 150);
}

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  Absolute window;

  window.setWindowTitle("Absolute");
  window.show();

  return app.exec();
}
