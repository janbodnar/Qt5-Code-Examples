#include <QTextStream>
#include <QFileInfo>
#include <QDateTime>

int main(int argc, char *argv[]) {

  QTextStream out{stdout};

  if (argc != 2) {

      qWarning("Usage: file_times file");
      return 1;
  }

  QString filename = argv[1];

  QFileInfo fileinfo{filename};

  QDateTime last_rea = fileinfo.lastRead();
  QDateTime last_mod = fileinfo.lastModified();

  out << "Last read: " << last_rea.toString() << endl;
  out << "Last modified: " << last_mod.toString() << endl;

  return 0;
}

