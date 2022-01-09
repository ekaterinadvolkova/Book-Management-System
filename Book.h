#ifndef CPP_PROJECT_BOOK_H
#define CPP_PROJECT_BOOK_H

#include "LibraryUser.cpp"
#include "ctime"

class Book {
public:
    Book();

    void setId(int id);

    void setBorrower(const LibraryUser &borrower);

    const string &getName() const;

    int getId() const;

    const string &getAuthor() const;

    void addBook();

    time_t getReturnDate() const;

    void setReturnDate();

    void deleteReturnDate();

    void deleteBorrower();

    const LibraryUser &getBorrower() const;

private:
    string name;
    string author;
    int id;
};

#endif //CPP_PROJECT_BOOK_H
