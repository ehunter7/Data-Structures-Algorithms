//
// Created by ehunt on 1/27/2021.
//

#include "address_book.h"
#include "Person.h"


//Constructors
AddressBook::AddressBook(const string &first, const string &last,
                         const string &address) {
    setPerson(first, last, address);
    mIndex++;
}


AddressBook::AddressBook(const string &first, const string &last)
: AddressBook(first, last, "") {}


AddressBook::AddressBook() : AddressBook("", "", "") {}


//Mutator
void AddressBook::setPerson(const string &first, const string &last,
                            const string &address) {
    Person entry(first, last, address);
    mContact.emplace_back(entry);
}


Person *AddressBook::getPerson() {
    if(!mContact.empty()) {
        if(mCurrentContact == mContact.end()){
            mCurrentContact = mContact.begin();
            return mCurrentContact->();
        }
    }else {
        return nullptr;
    }
}


Person *AddressBook::findPerson(string const &last) {
    return nullptr;
}


Person *AddressBook::findPerson(string const &first, string const &last) {
    return nullptr;
}


void AddressBook::print() {

}

