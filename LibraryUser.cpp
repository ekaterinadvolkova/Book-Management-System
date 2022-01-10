#include "LibraryUser.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using std::setw;

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
    checkUserName(firstName);

    cout << "Enter last name (only latin letters)" << endl;
    cin >> lastName;
    checkUserName(lastName);

    cout << "Please enter birth date (format: dd-mm-yyyy): ";
    char separator;
    cin >> day >> separator >> month >> separator >> year;

    checkBirthDate();
}

void LibraryUser::checkBirthDate() {
    char separator;
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    time_t tt = std::chrono::system_clock::to_time_t(now);
    tm local_tm = *localtime(&tt);
    int currentYear = local_tm.tm_year + 1900;

    while (month < 0 || month > 12 || day < 1 || day > 31 || year < 1920 || year > currentYear) {
        cout << "Invalid birth date. Enter the date again" << endl;
        cout << "Format: dd-mm-yyyy." << endl;
        cin >> day >> separator >> month >> separator >> year;
    }
}


void LibraryUser::checkUserName(string name) {
    auto is_invalid = [](unsigned char ch) {
        return !(isspace(ch) || isalpha(ch));
    };

    if (is_invalid) {
        while (any_of(name.begin(), name.end(), is_invalid)) {
            cout << "Invalid character in string." << endl;
            cout << "Please input only alphabets or space character." << endl;
            cin >> name;
        }
    }
}

int LibraryUser::getId() const {
    return id;
}

void LibraryUser::setId(int idUser) {
    id = idUser;
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

bool LibraryUser::readTxt(ifstream & is) {
    char separator;
    is >> id;
    is >> firstName;
    is >> lastName;
    is >> day >> separator >> month >> separator >> year;
    if (is.fail()) {
        return false;
    }
    return true;
}

void LibraryUser::writeTxt(ofstream & os) const {
    os << setw(4) << getId();
    os << setw(20) << getFirstName();
    os << setw(20) << getLastName();
    os << setw(4) << getBDay() << "-" << getBMonth() << "-" << getBYear();
    os << endl;
}


