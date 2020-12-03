#include <QTextStream>
#include <QDate>

int main(void) {

   QTextStream out(stdout);

   QDate bordate(1812, 9, 7);
   QDate slavdate(1805, 12, 2);

   QDate cd = QDate::currentDate();

   int j_today = cd.toJulianDay();
   int j_borodino = bordate.toJulianDay();
   int j_slavkov = slavdate.toJulianDay();

   out << "Days since Slavkov battle: " << j_today - j_slavkov << endl;
   out << "Days since Borodino battle: " << j_today - j_borodino << endl;
}
