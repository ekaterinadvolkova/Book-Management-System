#include "Library.h"
#include <fstream>

#define file_users "../Users.txt"
#define file_books "../Books.txt"

Library::Library() {
}

void Library::addUser() {
    LibraryUser user = LibraryUser();
    user.registerUser();
    int id = users.size()-1;
    if (id < 0) {
        id = 0;
    }
    user.setId(id);
    users.push_back(user);
}

void Library::saveRecords() {
    ofstream users_list, books_list;
    users_list.open(file_users);
    users_list << "Users list:" << endl;
    cout << "New list for users is created" << endl;

    books_list.open(file_books);
    books_list << "Books list:" << endl;
    cout << "New list for books is created" << endl;

    users_list.close();
    books_list.close();

}

void Library::addBook() {
    Book book = Book();
    book.addBook();
    int id = books.size() - 1;
    if (id < 0) {
        id = 0;
    }
    book.setId(id);
    books.push_back(book);
    availableBooks.push_back(book);
}

void Library::borrowBook() {


}

void Library::init() {
    users.clear();
    books.clear();
}
