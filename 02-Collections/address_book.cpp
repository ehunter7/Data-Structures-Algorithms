// ##################################################
// File: address_book.cpp
// Author: Eric Hunter
// Date: Jan 30, 2021
// Description: Functions for the AddressBook class.
//      GetPerson, and both findPerson functions are only returning
//      addresses and not the Person. I was unable to get this to work
//      and I am disappointed with the quality of my work. I will
//      continue strive for better and will allot more time to work
//      on these projects.
// ##################################################

#include <iostream>
#include <vector>
#include "address_book.h"


//Constructors
AddressBook::AddressBook(const string &first, const string &last,
                         const string &address) {
    setPerson(first, last, address);
    mpCurrentContact = mContact.begin();
}


AddressBook::AddressBook(const string &first, const string &last)
        : AddressBook(first, last, "") {}


AddressBook::AddressBook() : AddressBook("", "", "") {

}


//Mutator
void AddressBook::setPerson(const string &first, const string &last,
                            const string &address) {
    Person entry(first, last, address);
    mContact.emplace_back(entry);
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
// None
// @par Notes
// None
// ################################################################
Person const *AddressBook::getPerson() {

    std::next(mpCurrentContact.operator->());

    if (!mContact.empty()) {
        if (mpCurrentContact == mContact.end()) {
            mpCurrentContact = mContact.begin();
            return mpCurrentContact.operator->();
        }
        return mpCurrentContact.operator->();
    } else {
        //The address book is empty
        return nullptr;
    }
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
// None
// @par Notes
// None
// ################################################################
Person const *AddressBook::findPerson(string const &last) {

    std::vector<Person>::iterator iter;

    for (iter = mContact.begin(); iter != mContact.end(); iter++) {

        if (last == iter->getLasName()) {

            return iter.base();
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
// None
// @par Notes
// None
// ################################################################
Person const *AddressBook::findPerson(string const &first, string const &last) {

    std::vector<Person>::iterator iter;

    for (iter = mContact.begin(); iter != mContact.end(); iter++) {

        if (first == iter->getFirstName() && last == iter->getLasName()) {

            return iter.base();
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
// None
// @par Notes
// None
// ################################################################
void AddressBook::print() {

    std::vector<Person>::iterator iter;

    for (iter = mContact.begin(); iter != mContact.end(); iter++) {

        std::cout << iter->getFirstName() << std::endl;
        std::cout << iter->getLasName() << std::endl;
        std::cout << iter->getAddress() << std::endl;

        std::cout << "------------------------" << std::endl;
    }
}

