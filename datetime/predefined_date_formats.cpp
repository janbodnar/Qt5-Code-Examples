#include <QTextStream>
#include <QDate>

int main(void) {

   QTextStream out(stdout);

   QDate cd = QDate::currentDate();

   out << "Today is " << cd.toString(Qt::TextDate) << endl;
   out << "Today is " << cd.toString(Qt::ISODate) << endl;
   out << "Today is " << cd.toString(Qt::SystemLocaleShortDate) << endl;
   out << "Today is " << cd.toString(Qt::SystemLocaleLongDate) << endl;
   out << "Today is " << cd.toString(Qt::DefaultLocaleShortDate) << endl;
   out << "Today is " << cd.toString(Qt::DefaultLocaleLongDate) << endl;
   out << "Today is " << cd.toString(Qt::SystemLocaleDate) << endl;
   out << "Today is " << cd.toString(Qt::LocaleDate) << endl;
}
