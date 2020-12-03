#include <QTextStream>
#include <QDate>

int main(void) {

   QTextStream out(stdout);

   QList<int> years({2010, 2011, 2012, 2013, 2014, 2015, 2016, 2020, 2024});

   for (int year: years) {

       if (QDate::isLeapYear(year)) {

           out << year << " is a leap year" << endl;
       } else {

           out << year << " is not a leap year" << endl;
       }
   }
}
