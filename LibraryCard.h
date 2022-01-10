#ifndef CPP_PROJECT_LIBRARYCARD_H
#define CPP_PROJECT_LIBRARYCARD_H

#include <vector>
#include "Receipt.cpp"
#include "LibraryUser.h"

class LibraryCard {
public:
    LibraryCard(LibraryUser libraryUseruser);

    void addReceipt(Book book);

    const vector<Receipt> &getReceipts() const;

    void setBookReturned(int bookId);

    void deleteReceipt(Book book);

    const LibraryUser &getUser() const;

private:
    vector<Receipt> receipts;
    LibraryUser user;
};

#endif //CPP_PROJECT_LIBRARYCARD_H
