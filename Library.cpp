#include "Library.h"
#include <fstream>
#include <iomanip>

#define file_users "../Users/Users.txt"
#define file_books "../Books/Books.txt"

using std::setw;


Library::Library() {
}

void Library::addUser() {
    LibraryUser user = LibraryUser();
    user.registerUser();
    int id = users.size() - 1;
    if (id < 0) {
        id = 0;
    }
    user.setId(id);
    users.push_back(user);
}

void Library::saveRecords() {
//    ofstream users_list, books_list;
//    users_list.open(file_users);
//    users_list << "Users list:" << endl;
//    cout << "New list for users is created" << endl;
//
//    books_list.open(file_books);
//    books_list << "Books list:" << endl;
//    cout << "New list for books is created" << endl;
//
//    users_list.close();
//    books_list.close();

}

void Library::addBook() {
    Book book = Book();
    book.addBook();
    int id = books.size();
    id = 0;
    id = id ? 1 : books.size() + 1;
    book.setId(id);
    books.push_back(book);
    availableBooks.push_back(book);
}

void Library::borrowBook() {

    cout << "What book do you want to order? Type book id from the list" << endl;
    cout << "" << endl;
    print(getAvailableBooks());
    int id_book;
    cin >> id_book;
    loanedBooks.push_back(books[id_book - 1]);
//    loanedBooks.erase(remove(loanedBooks.begin(), loanedBooks.end(), loanedBooks[id_book-1]), loanedBooks.end());

}

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

void Library::print(vector<Book> books) {

    cout << setw(4) << "Id" << setw(20) << "Book" << setw(20) << "Author" << endl;

    for (int i = 0; i < books.size(); i++) {
        cout << setw(4) << books[i].getId() << setw(20) << books[i].getName() << setw(20) << books[i].getAuthor()
             << endl;
    }
}

const vector<Book> &Library::getBooks() const {
    return books;
}

const vector<Book> &Library::getAvailableBooks() const {
    return availableBooks;
}

const vector<Book> &Library::getLoanedBooks() const {
    return loanedBooks;
}
