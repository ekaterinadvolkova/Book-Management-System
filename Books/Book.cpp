#include "Book.h"

Book::Book() {
}

void Book::addBook() {
    cout << "Enter book name" << endl;
    cin >> name;
//    id = 10 + (rand() % 10000);
}

void Book::setId(int id) {
    Book::id = id;
}
