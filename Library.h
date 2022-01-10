#ifndef CPP_PROJECT_LIBRARY_H
#define CPP_PROJECT_LIBRARY_H

#include <vector>
#include "Book.cpp"
#include "LibraryCard.h"


class Library {
public:
    Library();

    void init();

    void addBook();

    void addUser();

    void saveRecords();

    void readRecords();

    void borrowBook();

    bool validateCard(int id);

    void returnBook();

    static void print(vector<Book> books, bool available);

    const vector<Book> &getBooks() const;

private:
    vector<Book> books;
    vector<LibraryCard> cards;
};

#endif //CPP_PROJECT_LIBRARY_H
