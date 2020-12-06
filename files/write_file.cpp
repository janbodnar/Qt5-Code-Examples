#include <QTextStream>
#include <QFile>

int main(void) {

  QTextStream out{stdout};

  QString filename = "distros.txt";
  QFile f{filename};

  if (f.open(QIODevice::WriteOnly)) {

    QTextStream out{&f};
    out << "Xubuntu" << endl;
    out << "Arch" << endl;
    out << "Debian" << endl;
    out << "Redhat" << endl;
    out << "Slackware" << endl;

  } else {

    qWarning("Could not open file");
  }

  return 0;
}
