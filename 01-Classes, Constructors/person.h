//
// Created by ehunt on 1/20/2021.
//

#ifndef DATA_STRUCTURES_ALGORITHMS_PERSON_H
#define DATA_STRUCTURES_ALGORITHMS_PERSON_H
#include <string>
using std::string;

class Person {
private:
    string mFirstName;
    string mLastName;
    string mAddress;

public:

    //Constructors
    Person();
    Person(string const &first, string const &last);
    Person(string const &first, string const &last, string const &address);

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
