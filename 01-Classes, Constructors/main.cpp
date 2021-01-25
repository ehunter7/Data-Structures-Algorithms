// ##################################################
// File: main.cpp
// Author: Eric Hunter
// Date: Jan 23, 2021
// Description: Main cpp file runs program. contains functions to retrieve
//              information from the user and another on to display the
//              entered information.
// ##################################################

#include <iostream>
#include <string>

#include "person.h"

using namespace std;

//Function Prototypes
void getPeople(Person people[], size_t length_of_array);
void printPeople(Person people[], size_t length_of_array);


int main() {

    int const kNumberOfPeople = 2;

    Person people[kNumberOfPeople];

    getPeople(people, kNumberOfPeople);
    cout << endl;
    printPeople(people, kNumberOfPeople);

    return 0;
}


// ################################################################
// @par Name
// getPeople
// @purpose
// takes an array and length of array and gets input from user to complete
//  object.
// @param [in]:
// Person people[], size_t length_of_array
// @return
// void
// @par References
// None
// @par Notes
// None
// ################################################################
void getPeople(Person people[], size_t length_of_array) {

    for (int i{0}; i < length_of_array; ++i) {

        string shuttle;
        Person &person = people[i];

        //Get first name
        cout << "Enter first name" << endl;
        getline(cin, shuttle);
        person.setFirstName(shuttle);

        //Get last name
        cout << "Enter last name" << endl;
        getline(cin, shuttle);
        person.setLastName(shuttle);

        //get address
        cout << "Enter address" << endl;
        getline(cin, shuttle);
        person.setAddress(shuttle);
    }
}


// ################################################################
// @par Name
// printPeople
// @purpose
// Takes an array and the length of the array and displays arrays contents.
// @param [in]:
// Person people[], size_t length_of_array
// @return
// void
// @par References
// None
// @par Notes
// None
// ################################################################
void printPeople(Person people[], size_t length_of_array) {

    for (int i{0}; i < length_of_array; ++i) {

    Person &person = people[i];

        cout << person.getFirstName() << " " << person.getLasName()
             << endl;

        cout << person.getAddress() << endl;

        cout << "----------------------------------------\n";
    }
}

