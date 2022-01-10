#include "Library.h"
#include <fstream>
#include <iomanip>

#define file_users "../Users/Users.txt"
#define file_books "../Books/Books.txt"

using std::setw;

Library::Library() = default;

void Library::addUser() {
    LibraryUser user = LibraryUser();
    user.registerUser();
    int id = cards.size();

    user.setId(id);
    LibraryCard *card = new LibraryCard(user);
    cards.push_back(*card);
    cout << "The User: " << user.getId() << " " << user.getFirstName() << " " << user.getLastName() << " ("
         << user.getBDay()
         << '-'
         << user.getBMonth() << '-' << user.getBMonth() << ") is now registered" << endl;
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
    int id = books.size() + 1;
    book.setId(id);
    books.push_back(book);
}

void Library::returnBook() {
    cout << "What is your reader id" << endl;
    int reader_id;
    cin >> reader_id;

    //validate if the user exists
    if (validateUser(reader_id)) {
        cout << "What book do you want to return?" << endl;
        cout << "Type book id" << endl;
        int id_book;
        cin >> id_book;

        auto is_even = [](int i) { return i % 2 == 0; };

        auto result3 = find_if(make_reverse_iterator(cards.end()), make_reverse_iterator(cards.begin()), is_even);

        //update the lists after the loan is complete


        cout << "Book is returned" << endl;
    }

}

void Library::borrowBook() {
    cout << "What is your reader id" << endl;
    int reader_id;
    cin >> reader_id;

    //validate if the user exists
    if (validateUser(reader_id)) {
        cout << "What book do you want to order? Type book id from the list" << endl;
        cout << "" << endl;
//        print(getAvailableBooks());

        cout << "Type book id from the list" << endl;
        int id_book;
        cin >> id_book;

        //add return date and borrower to a book

        //update the lists after the loan is complete

    }
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

void Library::print(vector<Book> books, bool available) {

    cout << setw(4) << "Id" << setw(20) << "Book" << setw(20) << "Author" << endl;

    for (auto &book: books) {
        cout << setw(4) << book.getId() << setw(20) << book.getName() << setw(20) << book.getAuthor()
             << endl;
    }
}

bool Library::validateCard(int id) {

    return false;
}

void Library::readRecords() {

}

const vector<Book> &Library::getBooks() const {
    return books;
}


//bool Library::validateUser(int id) {
//
//// Accessing out of range element using at() will throw out_of_range exception
//    try {
//        LibraryUser user = users.at(id - 1);
//        cout << "The user id:" << user.getId() << " is verified" << endl;
//        return true;
//    } catch (const out_of_range &ex) {
//        cout << "The User is not found" << endl;
//    }
//    return false;
//}

