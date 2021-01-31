// ##################################################
// File: main.cpp
// Author: Eric Hunter
// Date: Jan 30, 2021
// Description: Adds contacts to address book and tests each of the functions.
// ##################################################

#include <iostream>
#include "address_book.h"


int main() {

    AddressBook myContacts;

    myContacts.setPerson("Paul", "Craig", "123 This way");
    myContacts.setPerson("Daniel", "Born", "456 that way");
    myContacts.setPerson("Jason", "Smith", "789 Our way");
    myContacts.setPerson("John", "Monty", "147 Another St");
    myContacts.setPerson("William", "Teddy", "333 this way");

    //Prints entire current contact list.
    myContacts.print();

    //Get a contact from address book
    std::cout << "getPerson() returns: " << myContacts.getPerson() << std::endl;

    //Finds person in address book by last name
    std::cout << "findPerson(last) returns: ";
    std::cout << myContacts.findPerson("Born");
    std::cout << std::endl; //New line for readability

    //Finds person in address book by first and last name
    std::cout << "findPerson(first, last) returns: ";
    std::cout << myContacts.findPerson("Jason", "Smith");
    std::cout << std::endl; //New line for readability

    return 0;
}
