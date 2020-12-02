#include <QTextStream>

int main(void) {

  QTextStream out(stdout);

  QString s1 = "Eagle";
  QString s2 = "Eagle\n";
  QString s3 = "Eagle ";
  QString s4 = "орел";

  out << s1.length() << endl;
  out << s2.length() << endl;
  out << s3.length() << endl;
  out << s4.length() << endl;

  return 0;
}
