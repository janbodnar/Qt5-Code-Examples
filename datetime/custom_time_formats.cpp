#include <QTextStream>
#include <QTime>

int main(void) {

   QTextStream out(stdout);

   QTime ct = QTime::currentTime();

   out << "The time is " << ct.toString("hh:mm:ss.zzz") << endl;
   out << "The time is " << ct.toString("h:m:s a") << endl;
   out << "The time is " << ct.toString("H:m:s A") << endl;
   out << "The time is " << ct.toString("h:m AP") << endl;
}
