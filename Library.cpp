#include "Library.h"
#include <fstream>
#include <iomanip>

#define file_users "../Users/Users.txt"
#define file_books "../Books/Books.txt"

using std::setw;

Library::Library() = default;

void Library::init() {
    //clear files;
    ofstream users_list, books_list;
    books_list.open(file_books);
    books_list << "" << endl;
    books_list.close();

    users_list.open(file_users);
    users_list << "" << endl;
    users_list.close();
}

void Library::addUser() {
    LibraryUser libraryUser = LibraryUser();
    libraryUser.registerUser();
    LibraryCard libraryCard = LibraryCard(libraryUser);

    //set user id
    int id_user = libraryCards.size() + 1;
    libraryUser.setId(id_user);
    libraryCards.push_back(libraryCard);
}

void Library::addBook() {
    Book book = Book();
    book.registerBook();
    int id_book = books.size() + 1;
    book.setId(id_book);
    books.push_back(book);
}

void Library::borrowBook() {

    cout << "Enter book id" << endl;
    int book_id;
    cin >> book_id;

    cout << "Enter user id" << endl;
    int user_id;
    cin >> user_id;

    libraryCards[user_id - 1].addReceipt(books[book_id - 1]);

    cout << "Book " << books[book_id - 1].getName() << " is now loaned." << endl;

    libraryCards[user_id - 1].getReceipts().back().printReturnDate();
}


void Library::returnBook() {
    cout << "Enter book id" << endl;
    int book_id;
    cin >> book_id;

    cout << "Enter user id" << endl;
    int user_id;
    cin >> user_id;

    libraryCards[user_id - 1].setBookReturned(book_id);
}

const vector<Book> &Library::getLoanedBooks() {
    auto *loanedBooks = new vector<Book>();

    for_each(
            libraryCards.begin(),
            libraryCards.end(),
            [&loanedBooks](const LibraryCard &card) {
                for_each(
                        card.getReceipts().begin(),
                        card.getReceipts().end(),
                        [&loanedBooks](const Receipt &receipt) {
                            if (!receipt.getIsReturned()) {
                                loanedBooks->push_back(receipt.getBook());
                            }
                        });
            }
    );

    sort(loanedBooks->begin(), loanedBooks->end(), [](const Book &book1, const Book &book2) {
        return book1.getId() < book2.getId();
    });

    return *loanedBooks;
}

const vector<Book> &Library::getAvailableBooks() {
    const vector<Book> &loanedBooks = getLoanedBooks();
    auto *availableBooks = new vector<Book>();
    set_difference(
            books.begin(),
            books.end(),
            loanedBooks.begin(),
            loanedBooks.end(),
            inserter(*availableBooks, availableBooks->begin()),
            [](const Book & a, const Book & b) { return a.getId() < b.getId(); }
    );
    return *availableBooks;
}

void Library::printBooks() {
    cout << setw(4) << "Id" << setw(20) << "Book" << setw(20) << "Author" << endl;

    for (auto &book: books) {
        cout << setw(4) << book.getId() << setw(20) << book.getName() << setw(20) << book.getAuthor()
             << endl;
    }
}

void Library::printLoanedBooks() {
    cout << "Loaned books" << endl;
    cout << setw(4) << "Id" << setw(20) << "Book" << setw(20) << "Author" << endl;

    for (auto &book: getLoanedBooks()) {
        cout << setw(4) << book.getId() << setw(20) << book.getName() << setw(20) << book.getAuthor()
             << endl;
    }
}

void Library::printAvailableBooks() {
    cout << "Available books" << endl;
    cout << setw(4) << "Id" << setw(20) << "Book" << setw(20) << "Author" << endl;

    for (auto &book: getAvailableBooks()) {
        cout << setw(4) << book.getId() << setw(20) << book.getName() << setw(20) << book.getAuthor()
             << endl;
    }
}