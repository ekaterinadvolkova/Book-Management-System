#ifndef CPP_PROJECT_BOOK_H
#define CPP_PROJECT_BOOK_H

#include "LibraryUser.cpp"
#include "ctime"

#include <fstream>
#include <iomanip>

class Book {
public:
    Book();

    void setId(int id);

    void registerBook();

    const string &getName() const;

    int getId() const;

    const string &getAuthor() const;

    bool readTxt(ifstream & is);

    void writeTxt(ostream & os) const;

private:
    string name;
    string author;
    int id;
};

#endif //CPP_PROJECT_BOOK_H
