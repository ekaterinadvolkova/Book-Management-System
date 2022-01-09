#include "Library.h"
#include <fstream>

#define file_users "../Users.txt"
#define file_books "../Books.txt"

Library::Library() {
    users.clear();
    books.clear();
}

void Library::addUser() {
    LibraryUser user = LibraryUser();
    user.registerUser();
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
    books.push_back(book);
}
