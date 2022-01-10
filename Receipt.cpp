#include "Receipt.h"

void Receipt::setIsReturned(bool isReturned) {
    this->isReturned = isReturned;
}

Receipt::Receipt(Book book_) {
    book = book_;
    isReturned = false;
    returnDate = time(0) + 86400 * 14;
}

void Receipt::printReturnDate() const {
    cout << "Please, return at latest by " << asctime(localtime(&returnDate)) << endl;
}

const Book& Receipt::getBook() const {
    return book;
}

bool Receipt::getIsReturned() const {
    return isReturned;
}