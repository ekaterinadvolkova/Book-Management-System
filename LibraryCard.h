#ifndef CPP_PROJECT_LIBRARYCARD_H
#define CPP_PROJECT_LIBRARYCARD_H

#include <vector>
#include "Receipt.h"
#include "LibraryUser.h"

class LibraryCard {
public:
    LibraryCard(LibraryUser user);

private:
    LibraryUser user;
    vector<Receipt> receipts;
};


#endif //CPP_PROJECT_LIBRARYCARD_H
