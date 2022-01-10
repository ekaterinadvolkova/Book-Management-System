#include "LibraryCard.h"


LibraryCard::LibraryCard(LibraryUser libraryUser) {
    user = libraryUser;
}

void LibraryCard::addReceipt(Book book) {
    Receipt rec = Receipt(book);
    receipts.push_back(rec);
}

const vector<Receipt> &LibraryCard::getReceipts() const {
    return receipts;
}

void LibraryCard::deleteReceipt(Book book) {

}

void LibraryCard::setBookReturned(int bookId) {
    auto receipt = find_if(
            receipts.rbegin(),
            receipts.rend(),
            [bookId](const Receipt & receipt) {
                return receipt.getBook().getId() == bookId;
            }
    );

    // If the element is fount, the book can be returned
    if (receipt != receipts.rend()) {
        receipt->setIsReturned(true);
    }
}

const LibraryUser &LibraryCard::getUser() const {
    return user;
}
