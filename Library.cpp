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

    cout << "Book " << books[book_id - 1].getName() << " is loaned. Please, return by " << endl;
}

void Library::printBooks() {
    cout << setw(4) << "Id" << setw(20) << "Book" << setw(20) << "Author" << endl;

    for (auto &book: books) {
        cout << setw(4) << book.getId() << setw(20) << book.getName() << setw(20) << book.getAuthor()
             << endl;
    }
}

