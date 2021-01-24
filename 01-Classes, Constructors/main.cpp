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

    int const kNumberOfPeople = 5;

    Person people[kNumberOfPeople];

    getPeople(people, kNumberOfPeople);
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

    string shuttle;

    for (int i{0}; i < length_of_array; ++i) {

        //Get first name
        cout << "Enter first name" << endl;
        getline(cin, shuttle);
        people[i].setFirstName(move(shuttle));

        cout << endl;

        //Get last name
        cout << "Enter last name" << endl;
        getline(cin, shuttle);
        people[i].setLastName(move(shuttle));

        cout << endl;

        //get address
        cout << "Enter address" << endl;
        getline(cin, shuttle);
        people[i].setAddress(move(shuttle));

        cout << endl;
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

    cout << endl;
    for (int i{0}; i < length_of_array; ++i) {

        cout << people[i].getFirstName() << " " << people[i].getLasName()
             << endl;

        cout << people[i].getAddress() << endl;

        cout << "----------------------------------------\n";
    }
}

