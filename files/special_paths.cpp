#include <QTextStream>
#include <QDir>

int main(void) {

  QTextStream out{stdout};

  out << "Current path:" << QDir::currentPath() << endl;
  out << "Home path:" << QDir::homePath() << endl;
  out << "Temporary path:" << QDir::tempPath() << endl;
  out << "Root path:" << QDir::rootPath() << endl;

  return 0;
}
