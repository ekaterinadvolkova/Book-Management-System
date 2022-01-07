#ifndef CPP_PROJECT_LIBRARY_H
#define CPP_PROJECT_LIBRARY_H

#include <vector>
#include "Book.cpp"

class Library : public LibraryUser, public Book {
public:
    Library();
    void addBook();
    void addUser();
    void saveRecords();
    void borrowBook();
    void returnBook();
    void printRecords();

private:
    vector<Book> books;
    vector<LibraryUser> users;
};

#endif //CPP_PROJECT_LIBRARY_H
