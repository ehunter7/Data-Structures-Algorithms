// ##################################################
// File: person.h
// Author: Eric Hunter
// Date: Jan 23, 2021
// Description: Person class header file. Person class has three constructors,
//              working constructor take a first name, last name, and address.
//              Mutators set the first name, last name, and address.
//              Accessors retrieve first name, last name, and address.
// ##################################################

#ifndef DATA_STRUCTURES_ALGORITHMS_PERSON_H
#define DATA_STRUCTURES_ALGORITHMS_PERSON_H

#include <string>

using std::string;

class Person {

private:

    //Class attributes
    string mFirstName;
    string mLastName;
    string mAddress;

public:

    //Constructors
    Person(string const &first, string const &last, string const &address);
    Person(string const &first, string const &last);
    Person();



    //Mutators
    void setFirstName(string const &first);
    void setLastName(string const &last);
    void setAddress(string const &address);

    //Accessors
    string getFirstName() const;
    string getLasName() const;
    string getAddress() const;
};

#endif //DATA_STRUCTURES_ALGORITHMS_PERSON_H
