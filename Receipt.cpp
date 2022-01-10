#include "Receipt.h"
#include <iomanip>
#include <sstream>

void Receipt::setIsReturned(bool isReturned) {
    this->isReturned = isReturned;
}

Receipt::Receipt(Book book_) {
    book = book_;
    isReturned = false;
    returnDate = std::chrono::system_clock::now() + std::chrono::hours(14 * 24);
}

void Receipt::printReturnDate() const {
    auto in_time_t = std::chrono::system_clock::to_time_t(returnDate);

    std::stringstream ss;
    ss << std::put_time(std::localtime(&in_time_t), "%d-%m-%Y %X");
    cout << "Please, return at latest by " << ss.str() << endl;
}

const Book& Receipt::getBook() const {
    return book;
}

bool Receipt::getIsReturned() const {
    return isReturned;
}