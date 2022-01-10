#ifndef CPP_PROJECT_LIBRARY_H
#define CPP_PROJECT_LIBRARY_H

#include <vector>
#include "Book.cpp"
#include <list>
#include "LibraryCard.cpp"

class Library {

public:
    Library();

    void init();

    void addUser();

    void addBook();

    void borrowBook();

    void printBooks();


private:
    vector<Book> books;
    vector<LibraryCard> libraryCards;
};
#endif //CPP_PROJECT_LIBRARY_H
