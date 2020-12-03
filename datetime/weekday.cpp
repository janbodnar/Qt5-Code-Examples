#include <QTextStream>
#include <QDate>

int main(void) {

   QTextStream out(stdout);

   QDate cd = QDate::currentDate();
   int wd = cd.dayOfWeek();

   QLocale locale(QLocale("en_US"));

   out << "Today is " << locale.dayName(wd) << endl;
   out << "Today is " << locale.dayName(wd, QLocale::ShortFormat) << endl;
}
