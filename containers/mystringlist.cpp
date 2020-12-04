#include <QTextStream>
#include <QList>

int main(void) {

    QTextStream out(stdout);

    QString string = "coin, book, cup, pencil, clock, bookmark";
    QStringList items = string.split(",");
    QStringListIterator it(items);

    while (it.hasNext()) {

        out << it.next().trimmed() << endl;
    }

    return 0;
}

