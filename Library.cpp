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
    int id_user = libraryCards.size()+1;
    libraryUser.setId(id_user);

    libraryCards.push_back(libraryCard);
}

