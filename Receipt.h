
#ifndef CPP_PROJECT_RECEIPT_H
#define CPP_PROJECT_RECEIPT_H

#include "Book.h"

class Receipt {

public:

    Receipt(Book book);

    void setIsReturned(bool isReturned);

    void printReturnDate() const;

    const Book& getBook() const;

    bool getIsReturned() const;
private:
    Book book;
    std::chrono::system_clock::time_point returnDate;
    bool isReturned;
};

#endif //CPP_PROJECT_RECEIPT_H
