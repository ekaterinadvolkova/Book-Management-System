#ifndef CPP_PROJECT_LIBRARY_H
#define CPP_PROJECT_LIBRARY_H

#include <vector>
#include "Books/Book.cpp"


class Library {
public:
    Library();

    void init();

    void addBook();

    void addUser();

    void saveRecords();

    void borrowBook();

    void returnBook();

    void printRecords();

private:
    vector<Book> books;
    vector<Book> availableBooks;
    vector<Book> loanedBooks;
    vector<LibraryUser> users;


};

#endif //CPP_PROJECT_LIBRARY_H
