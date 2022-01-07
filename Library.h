#ifndef CPP_PROJECT_LIBRARY_H
#define CPP_PROJECT_LIBRARY_H
#include "Book.cpp"

class Library : public LibraryUser, public Book {
public:

private:
    array<Book> books;
    array<LibraryUser> users;
};

#endif //CPP_PROJECT_LIBRARY_H
