class Book {

    public:
        Book(QString, QString);
        QString getAuthor() const;
        QString getTitle() const;

    private:
        QString author;
        QString title;
};
