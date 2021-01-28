//
// Created by ehunt on 1/27/2021.
//

#include "address_book.h"


AddressBook::AddressBook(const string &first, const string &last,
                         const string &address) {
    setPerson(first, last, address);
}


AddressBook::AddressBook(const string &first, const string &last)
: AddressBook(first, last, "") {}


AddressBook::AddressBook() : AddressBook("", "", "") {}


//Mutator
void AddressBook::setPerson(const string &first, const string &last,
                            const string &address) {
    Person entry(first, last, address);
    mContact.push_back(entry);
}


Person AddressBook::*getPerson(){

}