#include <QTextStream>

int main(void) {

   QTextStream out(stdout);

   QString a = "love";

   a.append(" chess");
   a.prepend("I ");

   out << a << endl;
   out << "The a string has " << a.count()
       << " characters" << endl;

   out << a.toUpper() << endl;
   out << a.toLower() << endl;

   return 0;
}
