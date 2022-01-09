#ifndef CPP_PROJECT_LIBRARYUSER_H
#define CPP_PROJECT_LIBRARYUSER_H
#include <string>

using namespace std;

class LibraryUser {
public:
    LibraryUser();

    void registerUser();

    void checkBirthDate();

    static bool checkUserName(string name);

    const string &getFirstName() const;

    const string &getLastName() const;

    int getBDay() const;

    int getBMonth() const;

    int getBYear() const;

    int getId() const;

    void setId(int id);

private:
    int id;
    string firstName;
    string lastName;
    int day, month, year;
};

#endif //CPP_PROJECT_LIBRARYUSER_H
