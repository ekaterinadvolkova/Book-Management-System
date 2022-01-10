
#ifndef CPP_PROJECT_RECEIPT_H
#define CPP_PROJECT_RECEIPT_H

#include "Book.h"

class Receipt {

public:

    Receipt(Book book);

    void setIsReturned(bool isReturned);

private:
    Book book;
    time_t returnDate;
    bool isReturned;
};

#endif //CPP_PROJECT_RECEIPT_H
