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

bool Book::readTxt(ifstream &is) {
    is >> id;
    is >> name;
    is >> author;
    if (is.fail()) {
        return false;
    }
    return true;
}

void Book::writeTxt(ostream &os) const {
    os << setw(4) << id;
    os << setw(20) << name;
    os << setw(20) << author << endl;
}







