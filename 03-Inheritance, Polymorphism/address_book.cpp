// ##################################################
// File: address_book.cpp
// Author: Eric Hunter
// Date: Jan 30, 2021
// Description: Functions for the AddressBook class.
// ##################################################

#include <iostream>
#include <vector>
#include "address_book.h"


// ################################################################
// @par References
// Grading feedback assignment-02
// @par Notes
// None
// ################################################################
AddressBook::AddressBook() {

    mpCurrentContact = this->begin();
    this->reserve(5);
}


AddressBook::AddressBook(const string &first, const string &last)
        : AddressBook(first, last, "") {}


AddressBook::AddressBook(const string &first, const string &last,
                         const string &address) {
    setPerson(first, last, address);
}


void AddressBook::setPerson(const string &first, const string &last,
                            const string &address) {
    Person addressBookEntry(first, last, address);
    this->emplace_back(addressBookEntry);
}


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
// Discord chat - Assignment-02
// @par Notes
// Ive tried this multiple different ways and cannot figure it out.
// I could use some guidance.
// ################################################################
Person const *AddressBook::getPerson() {

    if (this->empty()) {
        return nullptr;
    }

    if (mpCurrentContact == this->end()) {
        mpCurrentContact = this->begin();
    }

    mpCurrentContact = std::next(mpCurrentContact);
    return std::prev(mpCurrentContact).base();
//return mpCurrentContact.operator->();
}


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
// Discord chat - Assignment-02
// @par Notes
// Ive tried this multiple different ways and cannot figure it out.
// I could use some guidance.
// ################################################################
Person const *AddressBook::findPerson(string const &last) {

    AddressBook::iterator iter;

    for (iter = this->begin(); iter < this->end(); iter++) {

        if (isMatchingLastName(iter->getLasName(), last)) {

            return &iter;
        }
    }
    return nullptr;
}


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
// Discord chat - Assignment-02
// @par Notes
// Ive tried this multiple different ways and cannot figure it out.
// I could use some guidance.
// ################################################################
Person const *AddressBook::findPerson(string const &first, string const &last) {

    std::vector<Person>::iterator iter;

    for (iter = this->begin(); iter < this->end(); iter++) {

        if (first == iter->getFirstName() && last == iter->getLasName()) {

            Person *tmp = new Person(iter->getFirstName(), iter->getLasName(), iter->getAddress());
            return tmp;
        }
    }
    return nullptr;
}


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
// Discord chat - Assignment-02
// @par Notes
// None
// ################################################################
void AddressBook::print() {

    // std::vector<Person>::iterator iter;

    for (auto contact : *this) {

        std::cout << contact.getFirstName() << std::endl;
        std::cout << contact.getLasName() << std::endl;
        std::cout << contact.getAddress() << std::endl;

        std::cout << "------------------------" << std::endl;
    }
}

