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
