#ifndef CPP_PROJECT_LIBRARY_H
#define CPP_PROJECT_LIBRARY_H

#include <vector>
#include "Book.cpp"
#include <list>

#include "LibraryCardsHashtable.h"

class Library {


public:
    Library();

    void init();


private:
    vector<Book> books;
    vector<LibraryCard> libraryCards;

#endif //CPP_PROJECT_LIBRARY_H
