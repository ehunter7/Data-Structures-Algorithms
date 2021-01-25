// ##################################################
// File: person.cpp
// Author: Eric Hunter
// Date: Jan 23, 2021
// Description: Person class cpp file. contains functions for the Person class.
// ##################################################

#include "person.h"

//working constructor
Person::Person(string const &first, string const &last, string const &address) {
    setFirstName(first);
    setLastName(last);
    setAddress(address);
}


//Constructors
Person::Person(string const &first, string const &last) : Person(first, last, "") {}


Person::Person() : Person("", "", "") {}


//Mutators
void Person::setFirstName(string const &first) {
    mFirstName = first;
}


void Person::setLastName(string const &last) {
    mLastName = last;
}


void Person::setAddress(string const &address) {
    mAddress = address;
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