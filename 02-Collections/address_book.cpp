// ##################################################
// File: address_book.cpp
// Author: Eric Hunter
// Date: Jan 30, 2021
// Description: Functions for the AddressBook class.
// ##################################################

#include <iostream>
#include <vector>
#include "address_book.h"


//Constructors
AddressBook::AddressBook(const string &first, const string &last,
                         const string &address) {
    setPerson(first, last, address);
}


AddressBook::AddressBook(const string &first, const string &last)
        : AddressBook(first, last, "") {}


AddressBook::AddressBook() {

    mpCurrentContact = mAddressBookContacts.begin();
    mAddressBookContacts.reserve(5);
}


//Mutator
void AddressBook::setPerson(const string &first, const string &last,
                            const string &address) {
    Person addressBookEntry(first, last, address);
    mAddressBookContacts.emplace_back(addressBookEntry);
}


Person const *AddressBook::getPerson() {

    Person tmp = mpCurrentContact;
    std::next(mpCurrentContact);

    if (!mAddressBookContacts.empty()) {
        if (mpCurrentContact == mAddressBookContacts.end()) {

            mpCurrentContact = mAddressBookContacts.begin();
            return tmp;
        }

        return tmp;
    } else {

        return nullptr;
    }
}


Person const *AddressBook::findPerson(string const &last) {

    std::vector<Person>::iterator iter;

    for (iter = mAddressBookContacts.begin(); iter <= mAddressBookContacts.end(); iter++) {

        if (last == iter->getLasName()) {
            Person tmp = iter;
            return tmp;
        }
    }
    return nullptr;
}


Person const *AddressBook::findPerson(string const &first, string const &last) {

    std::vector<Person>::iterator iter;

    for (iter = mAddressBookContacts.begin(); iter <= mAddressBookContacts.end(); iter++) {

        if (first == iter->getFirstName() && last == iter->getLasName()) {

            Person tmp = iter;
            return tmp;
        }
    }
    return nullptr;
}


void AddressBook::print() {

    std::vector<Person>::iterator iter;

    for (iter = mAddressBookContacts.begin(); iter <= mAddressBookContacts.end(); iter++) {

        std::cout << iter->getFirstName() << std::endl;
        std::cout << iter->getLasName() << std::endl;
        std::cout << iter->getAddress() << std::endl;

        std::cout << "------------------------" << std::endl;
    }
}

