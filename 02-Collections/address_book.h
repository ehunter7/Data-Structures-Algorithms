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

    std::vector<Person> mAddressBookContacts;

    std::vector<Person>::iterator mpCurrentContact;

public:

    AddressBook();
    AddressBook(string const &first, string const &last);
    AddressBook(string const &first, string const &last, string const &address);

    void setPerson(string const &first, string const &last, string const &address);


// ################################################################
// @par Name
// getPerson
// @purpose
// Gets a person from the address book, each time it is called
// @param [in]:
//None
// @return
// returns address of object from mContacts vector
// @par References
// None
// @par Notes
// None
// ################################################################
    Person const *getPerson();


    // ################################################################
// @par Name
// findPerson
// @purpose
// Iterates through mContacts vector looking for a matching last name
// @param [in]:
// string variable referenced as last
// @return
// Returns an address to an object in the mContacts vector
// @par References
// None
// @par Notes
// None
// ################################################################
    Person const *findPerson(string const &last);


    // ################################################################
// @par Name
// findPerson
// @purpose
// Finds a contact in AddressBook by first and last name
// @param [in]:
// string variable referenced as first and last
// @return
// Returns an address to an object in the mContacts vector
// @par References
// None
// @par Notes
// None
// ################################################################
    Person const *findPerson(string const &first, string const &last);


    // ################################################################
// @par Name
// print
// @purpose
// Displays all contents of AddressBook vector
// @param [in]:
// None
// @return
// void
// @par References
// None
// @par Notes
// None
// ################################################################
    void print();

};


#endif //INC_02_COLLECTIONS_ADDRESS_BOOK_H
