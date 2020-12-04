#include <QString>
#include "book.h"

Book::Book(QString auth, QString tit) {

    author = auth;
    title = tit;
}

QString Book::getAuthor() const {

    return author;
}

QString Book::getTitle() const {

    return title;
}
