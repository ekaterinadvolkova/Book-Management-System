#ifndef CPP_PROJECT_BOOK_H
#define CPP_PROJECT_BOOK_H

#include "../Users/LibraryUser.cpp"
#include "ctime"

class Book {
public:
    Book();

    void setId(int id);

    const string &getName() const;

    int getId() const;

    const string &getAuthor() const;

    void addBook();

private:
    string name;
    string author;
    int id;
    LibraryUser borrower;
    int returnDate;
};

#endif //CPP_PROJECT_BOOK_H
