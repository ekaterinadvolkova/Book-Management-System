#include "Book.h"

Book::Book() = default;

void Book::addBook() {
    cout << "Enter book name (No spaces. 15 symbols max)" << endl;
    cin >> name;

    cout << "Enter Author (No spaces. 15 symbols max)" << endl;
    cin >> author;

    //add checking that length is 15 symbols
}

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

void Book::setBorrower(const LibraryUser &borrower) {
    Book::borrower = borrower;
}

time_t Book::getReturnDate() const {
    return returnDate;
}

void Book::setReturnDate() {
//14 days after today is return date
    returnDate = time(0) + 86400 * 14;
    cout << "Return the latest by " << asctime(localtime(&returnDate));
}
