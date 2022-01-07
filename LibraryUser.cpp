#include "LibraryUser.h"

LibraryUser::LibraryUser() {
    registerUser();
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


    cout << "Enter last name (only latin letters)" << endl;
    cin >> lastName;

    if (!checkUserName(firstName)|| !checkUserName(lastName)) {
        cout << "Enter first name (only latin letters)" << endl;
        cin >> firstName;
        cout << "Enter last name (only latin letters)" << endl;
        cin >> lastName;
    }

    cout << "Please enter birth date (format: dd-mm-yyyy): ";
    char separator;
    cin >> day >> separator >> month >> separator >> year;

    checkBirthDate();

    cout << "The User: " << firstName << " " << lastName << " (" << day << '-'
         << month << '-' << year << ") is now registered" << endl;

}

void LibraryUser::checkBirthDate() {
    char separator;

    while (month < 0 || month > 12 || day < 1 || day > 31 || year < 1920) {
        cout << "Invalid birth date. Enter the date again" << endl;
        cout << "Format: dd-mm-yyyy." << endl;

        cin >> day >> separator >> month >> separator >> year;
    }
}

bool LibraryUser::checkUserName(string name) {
    auto is_invalid = [](unsigned char ch) {
        return !(isspace(ch) || isalpha(ch));
    };

    if (any_of(name.begin(), name.end(), is_invalid)) {
        cout << "Invalid character in string." << endl;
        cout << "Please input only alphabets or space character." << endl;
    }

}



