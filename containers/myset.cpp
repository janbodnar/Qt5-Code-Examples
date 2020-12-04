#include <QSet>
#include <QList>
#include <QTextStream>
#include <algorithm>

int main(void) {

    QTextStream out(stdout);

    QSet<QString> cols1 = {"yellow", "red", "blue"};
    QSet<QString> cols2 = {"blue", "pink", "orange"};

    out << "There are " << cols1.size() << " values in the set" << endl;

    cols1.insert("brown");

    out << "There are " << cols1.size() << " values in the set" << endl;

    cols1.unite(cols2);

    out << "There are " << cols1.size() << " values in the set" << endl;

    for (QString val : cols1) {
        out << val << endl;
    }

    QList<QString> lcols = cols1.values();
    std::sort(lcols.begin(), lcols.end());

    out << "*********************" << endl;
    out << "Sorted:" << endl;

    for (QString val : lcols) {
        out << val << endl;
    }

   return 0;
}
