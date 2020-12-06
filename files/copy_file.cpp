#include <QTextStream>
#include <QFile>

int main(int argc, char *argv[]) {

  QTextStream out{stdout};

  if (argc != 3) {

      qWarning("Usage: copyfile source destination");
      return 1;
  }

  QString src = argv[1];

  if (!QFile{src}.exists()) {

      qWarning("The source file does not exist");
      return 1;
  }

  QString dest(argv[2]);

  QFile::copy(src, dest);

  return 0;
}
