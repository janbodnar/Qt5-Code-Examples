#include <QTextStream>
#include <QFile>

int main(void) {

  QTextStream out{stdout};

  QFile f{"words.txt"};

  if (!f.open(QIODevice::ReadOnly)) {

    qWarning("Cannot open file for reading");
    return 1;
  }

  QTextStream in{&f};

  while (!in.atEnd()) {

    QString line = in.readLine();
    out << line << endl;
  }

  return 0;
}
