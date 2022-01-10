#include "LibraryUser.h"
#include <iostream>

LibraryUser::LibraryUser() {
}

const string &LibraryUser::getFirstName() const {
    return firstName;
}

const string &LibraryUser::getLastName() const {
    return lastName;
}

int LibraryUser::getBDay() const {
    return day;
}

int LibraryUser::getBMonth() const {
    return month;
}

int LibraryUser::getBYear() const {
    return year;
}

void LibraryUser::registerUser() {

    cout << "Enter first name (only latin letters)" << endl;
    cin >> firstName;
//    checkUserName(firstName);

    cout << "Enter last name (only latin letters)" << endl;
    cin >> lastName;
//    checkUserName(lastName);

    cout << "Please enter birth date (format: dd-mm-yyyy): ";
    char separator;
    cin >> day >> separator >> month >> separator >> year;

    checkBirthDate();
}

void LibraryUser::checkBirthDate() {
    char separator;

    while (month < 0 || month > 12 || day < 1 || day > 31 || year < 1920) {
        cout << "Invalid birth date. Enter the date again" << endl;
        cout << "Format: dd-mm-yyyy." << endl;
        cin >> day >> separator >> month >> separator >> year;
    }
}

//auto is_invalid = [](unsigned char ch) {
//    return !(isspace(ch) || isalpha(ch));
//};
//void LibraryUser::checkUserName(string name) {
//
//    if (is_invalid) {
//        while (any_of(name.begin(), name.end(), is_invalid)) {
//            cout << "Invalid character in string." << endl;
//            cout << "Please input only alphabets or space character." << endl;
//            cin >> name;
//        }
//    }
//}

int LibraryUser::getId() const {
    return id;
}

void LibraryUser::setId(int id) {
    LibraryUser::id = id;
}

void LibraryUser::setFirstName(const string &firstName) {
    LibraryUser::firstName = firstName;
}

void LibraryUser::setLastName(const string &lastName) {
    LibraryUser::lastName = lastName;
}

void LibraryUser::setDay(int day) {
    LibraryUser::day = day;
}

void LibraryUser::setMonth(int month) {
    LibraryUser::month = month;
}

void LibraryUser::setYear(int year) {
    LibraryUser::year = year;
}



