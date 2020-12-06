#include <QTextStream>
#include <QDir>

int main(void) {

  QTextStream out{stdout};
  QDir dir;

  if (dir.mkdir("mydir")) {

    out << "mydir successfully created" << endl;
  }

  dir.mkdir("mydir2");

  if (dir.exists("mydir2")) {
      
    dir.rename("mydir2", "newdir");
  }

  dir.mkpath("temp/newdir");
}
