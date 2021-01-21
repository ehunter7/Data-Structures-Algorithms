//
// Created by ehunt on 1/20/2021.
//

#ifndef DATA_STRUCTURES_ALGORITHMS_PERSON_H
#define DATA_STRUCTURES_ALGORITHMS_PERSON_H
#include <string>
using std::string;

class Person {
private:
    string firstName;
    string lastName;
    string address;
public:

    //Constructors
    Person();
    Person(string first, string last);
    Person(string first, string last, string address);

    //Mutators
    void setFirstName(string first);
    void setLastName(string last);
    void setAddress(string address);

    //Accessors
    string getFirstName() const;
    string getLasName() const;
    string getAddress() const;

};


#endif //DATA_STRUCTURES_ALGORITHMS_PERSON_H
