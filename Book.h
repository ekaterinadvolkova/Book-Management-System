#ifndef CPP_PROJECT_BOOK_H
#define CPP_PROJECT_BOOK_H

#include "LibraryUser.cpp"

class Book {
public:

private:
    string name;
    int id;
    LibraryUser borrower;
    int returnDay, returnMonth, returnYear;
};

#endif //CPP_PROJECT_BOOK_H
