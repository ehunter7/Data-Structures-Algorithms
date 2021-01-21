//
// Created by ehunt on 1/20/2021.
//

#include "person.h"

//Constructors
Person::Person()
: Person("","",""){}

Person::Person(string first, string last)
: Person(first, last, ""){}

Person::Person(string first, string last, string address){
    this->setFirstName(first);
    this->setLastName(last);
    this->setAddress(address);
}

//Mutators
void Person::setFirstName(string first){
    this->firstName = first;
}

void Person::setLastName(string last){
    this->lastName = last;
}

void Person::setAddress(string address) {
    this->address = address;
}

//Accessors
string Person::getFirstName() const {
    return this->firstName;
}

string Person::getLasName() const {
    return this->lastName;
}

string Person::getAddress() const {
    return this->address;
}