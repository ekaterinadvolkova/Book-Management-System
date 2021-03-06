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

    void returnBook();

    void printBooks();

    void printLoanedBooks();

    void printAvailableBooks();

    const vector<Book> & getLoanedBooks();

    const vector<Book> & getAvailableBooks();

    void saveToFile();

    void readFromFile();
private:
    vector<Book> books;
    vector<LibraryCard> libraryCards;
};
#endif //CPP_PROJECT_LIBRARY_H
