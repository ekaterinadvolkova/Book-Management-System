#include "Book.h"

Book::Book() = default;


void Book::setId(int book_id) {
    Book::id = book_id;
}

const string &Book::getName() const {
    return name;
}

int Book::getId() const {
    return id;
}

const string &Book::getAuthor() const {
    return author;
}

void Book::registerBook() {
    cout << "Enter book name (No spaces. 15 symbols max)" << endl;
    cin >> name;

    cout << "Enter Author (No spaces. 15 symbols max)" << endl;
    cin >> author;
}

void Book::readTxt(istream is) {
    is >> id;
    is >> name;
    is >> author;
}

void Book::writeTxt(ostream os) {
    os << id;
    os << name;
    os << author;
}







