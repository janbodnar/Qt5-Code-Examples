#include <QTextStream>
#include <QTime>

int main(void) {

   QTextStream out(stdout);

   QTime ct = QTime::currentTime();

   out << "The time is " << ct.toString(Qt::TextDate) << endl;
   out << "The time is " << ct.toString(Qt::ISODate) << endl;
   out << "The time is " << ct.toString(Qt::SystemLocaleShortDate) << endl;
   out << "The time is " << ct.toString(Qt::SystemLocaleLongDate) << endl;
   out << "The time is " << ct.toString(Qt::DefaultLocaleShortDate) << endl;
   out << "The time is " << ct.toString(Qt::DefaultLocaleLongDate) << endl;
   out << "The time is " << ct.toString(Qt::SystemLocaleDate) << endl;
   out << "The time is " << ct.toString(Qt::LocaleDate) << endl;
}
