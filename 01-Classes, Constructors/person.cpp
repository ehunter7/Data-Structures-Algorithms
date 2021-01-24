// ##################################################
// File: person.cpp
// Author: Eric Hunter
// Date: Jan 23, 2021
// Description: Person class cpp file. contains functions for the Person class.
// ##################################################

#include "person.h"


//Constructors
Person::Person()
        : Person("", "", "") {}


Person::Person(string const &first, string const &last)
        : Person(first, last, "") {}


//working constructor
Person::Person(string const &first, string const &last, string const &address) {
    this->setFirstName(first);
    this->setLastName(last);
    this->setAddress(address);
}


//Mutators
void Person::setFirstName(string const &first) {
    this->mFirstName = first;
}


void Person::setLastName(string const &last) {
    this->mLastName = last;
}


void Person::setAddress(string const &address) {
    this->mAddress = address;
}


//Accessors
string Person::getFirstName() const {
    return this->mFirstName;
}


string Person::getLasName() const {
    return this->mLastName;
}


string Person::getAddress() const {
    return this->mAddress;
}