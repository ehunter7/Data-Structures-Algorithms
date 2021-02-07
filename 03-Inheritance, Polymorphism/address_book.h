// ##################################################
// File: address_book.h
// Author: Eric Hunter
// Date: Jan 30, 2021
// Description: Contains AddressBook class and declares its functions and variables.
// ##################################################

#ifndef INC_02_COLLECTIONS_ADDRESS_BOOK_H
#define INC_02_COLLECTIONS_ADDRESS_BOOK_H

#include <vector>
#include <iterator>
#include "Person.h"

class AddressBook : public std::vector<Person> {

private:

//    std::vector<Person> mAddressBookContacts;

    AddressBook::iterator mpCurrentContact;


    // ################################################################
    // @par Name
    // isMatchingLastName
    // @purpose
    // check is parameters passed to it are true
    // @param [in]:
    // current Persons last name and the last name user is searching for.
    // @return
    // true or false
    // @par References
    // discord discussion assignment-02
    // @par Notes
    // None
    // ################################################################
    bool isMatchingLastName(string const &current, string const &to) {
        return current == to;
    }


    // ################################################################
    // @par Name
    // isMatchingFirstAndLastName
    // @purpose
    // check is parameters passed to it are true
    // @param [in]:
    // current Persons last and first name and the last name user is searching for.
    // @return
    // True or false
    // @par References
    // Discord discussion assignment-02
    // @par Notes
    // None
    // ################################################################
    bool isMatchingFirstAndLastName(string const &current_first, string const &current_last,
                                    string const &to_first, string const &to_last) {
        bool isMatchingFirstName = current_first == to_first;
        return isMatchingFirstName && isMatchingLastName(current_last, to_last);
    }


public:

    AddressBook();
    AddressBook(string const &first, string const &last);
    AddressBook(string const &first, string const &last, string const &address);

    void setPerson(string const &first, string const &last, string const &address);

    Person const *getPerson();
    Person const *findPerson(string const &last);
    Person const *findPerson(string const &first, string const &last);

    void print();

};


#endif //INC_02_COLLECTIONS_ADDRESS_BOOK_H
