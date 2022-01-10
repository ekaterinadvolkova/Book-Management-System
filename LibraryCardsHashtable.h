
#ifndef CPP_PROJECT_LIBRARYCARDSHASHTABLE_H
#define CPP_PROJECT_LIBRARYCARDSHASHTABLE_H

#include <iostream>
#include <list>
#include "LibraryCard.h"

class HashTable {
    int capacity;
    list<int> *table;

public:
    HashTable(int V);

    void insertItem(int key, int data);

    void deleteItem(int key);
};
#endif //CPP_PROJECT_LIBRARYCARDSHASHTABLE_H
