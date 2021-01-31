// ##################################################
// File: address_book.h
// Author: Eric Hunter
// Date: Jan 30, 2021
// Description: Contains AddressBook class and declares its functions and variables.
// ##################################################

#ifndef INC_02_COLLECTIONS_ADDRESS_BOOK_H
#define INC_02_COLLECTIONS_ADDRESS_BOOK_H

#include <vector>
#include <iterator>
#include "Person.h"

class AddressBook {

private:

    std::vector<Person> mContact;

    std::vector<Person>::iterator mpCurrentContact;

public:

    //Constructors
    //Working Constructor
    AddressBook(string const &first, string const &last, string const &address);
    AddressBook(string const &first, string const &last);
    AddressBook();

    //Mutators
    void setPerson(string const &first, string const &last, string const &address);

    //Accessors

    Person const *getPerson();
    Person const *findPerson(string const &last);
    Person const *findPerson(string const &first, string const &last);
    void print();

};


#endif //INC_02_COLLECTIONS_ADDRESS_BOOK_H
