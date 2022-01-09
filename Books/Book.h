#ifndef CPP_PROJECT_BOOK_H
#define CPP_PROJECT_BOOK_H

#include "../Users/LibraryUser.cpp"
#include "ctime"

class Book {
public:
    Book();

    void addBook();

private:
    string name;
    int id;
    LibraryUser borrower;
    int returnDate;
};

#endif //CPP_PROJECT_BOOK_H
