#include "Receipt.h"

void Receipt::setIsReturned(bool isReturnedd) {
    isReturned = isReturnedd;
}

Receipt::Receipt(Book book_) {
    book = book_;
    isReturned = false;
    returnDate = time(0) + 86400 * 14;
}
