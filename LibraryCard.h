#ifndef CPP_PROJECT_LIBRARYCARD_H
#define CPP_PROJECT_LIBRARYCARD_H

#include <vector>
#include "Receipt.cpp"
#include "LibraryUser.h"

class LibraryCard {

    vector<Receipt> receipts;

public:
    LibraryCard(LibraryUser libraryUseruser);

    void addReceipt(Book book);

    const vector<Receipt> &getReceipts() const;


private:
    LibraryUser user;
};

#endif //CPP_PROJECT_LIBRARYCARD_H
