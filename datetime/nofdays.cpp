#include <QTextStream>
#include <QDate>

int main(void) {

   QTextStream out(stdout);
   QList<QString> months;

   months.append("January");
   months.append("February");
   months.append("March");
   months.append("April");
   months.append("May");
   months.append("June");
   months.append("July");
   months.append("August");
   months.append("September");
   months.append("October");
   months.append("November");
   months.append("December");

   QDate dt1 { 2020, 9, 18 };
   QDate dt2 { 2020, 2, 11 };
   QDate dt3 { 2020, 5, 1 };
   QDate dt4 { 2020, 12, 11 };
   QDate dt5 { 2020, 2, 29 };

   out << "There are " << dt1.daysInMonth() << " days in "
       << months.at(dt1.month()-1) << endl;
   out << "There are " << dt2.daysInMonth() << " days in "
       << months.at(dt2.month()-1) << endl;
   out << "There are " << dt3.daysInMonth() << " days in "
       << months.at(dt3.month()-1) << endl;
   out << "There are " << dt4.daysInMonth() << " days in "
       << months.at(dt4.month()-1) << endl;
   out << "There are " << dt5.daysInMonth() << " days in "
       << months.at(dt5.month()-1) << endl;

   out << "There are " << dt1.daysInYear() << " days in year "
       << QString::number(dt1.year()) << endl;
}
