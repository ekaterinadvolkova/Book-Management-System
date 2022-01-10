#ifndef CPP_PROJECT_BOOK_H
#define CPP_PROJECT_BOOK_H

#include "LibraryUser.cpp"
#include "ctime"

class Book {
public:
    Book();

    void setId(int id);

    void registerBook();

    const string &getName() const;

    int getId() const;

    const string &getAuthor() const;

    void readTxt(ifstream & is);

    void writeTxt(ostream os);

private:
    string name;
    string author;
    int id;
};

#endif //CPP_PROJECT_BOOK_H
