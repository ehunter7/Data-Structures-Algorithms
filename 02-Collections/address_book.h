//
// Created by ehunt on 1/27/2021.
//

#ifndef INC_02_COLLECTIONS_ADDRESS_BOOK_H
#define INC_02_COLLECTIONS_ADDRESS_BOOK_H
#include <vector>
#include "Person.h"

class AddressBook {
private:
    std::vector <Person> mContact;

    //TODO add static index variable to hold position in address book

public:

    //Constructors
    //Working Constructor
    AddressBook(string const &first, string const &last, string const &address);
    AddressBook(string const &first, string const &last);
    AddressBook();

    //Mutators
    void setPerson(string const &first, string const &last, string const &address);

    //Accessors
    //TODO look into asterisk in front of methods names
    //TODO Need to make const
    Person *getPerson();
    Person *findPerson(string const &last);
    Person *findPerson(string const &first, string const &last);
    void print();

};


#endif //INC_02_COLLECTIONS_ADDRESS_BOOK_H
