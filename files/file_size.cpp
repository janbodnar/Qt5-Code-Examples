#include <QTextStream>
#include <QFileInfo>

int main(int argc, char *argv[]) {

  QTextStream out{stdout};

  if (argc != 2) {

    qWarning("Usage: file_size file");
    return 1;
  }

  QString filename = argv[1];

  QFile f{filename};

  if (!f.exists()) {

    qWarning("The file does not exist");
    return 1;
  }

  QFileInfo fileinfo{filename};

  qint64 size = fileinfo.size();

  QString str = "The size is: %1 bytes";

  out << str.arg(size) << endl;

  return 0;
}
