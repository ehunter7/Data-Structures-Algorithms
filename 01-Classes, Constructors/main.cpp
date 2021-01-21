#include <iostream>
#include <string>
#include "person.h"

using namespace std;
void getPeople(Person people[]);
void printPeople(Person people[]);

int main() {

    Person people[5];

    getPeople(people);
    printPeople(people);

    return 0;
}

void getPeople(Person people[]){
    string fName;
    string lName;
    string address;
    for(int x = 0; x < 5; x++){

        cout << "Enter first name" << endl;
        getline(cin, fName);
        people[x].setFirstName(fName);
        cout << "Enter last name" << endl;
        getline(cin, lName);
        people[x].setLastName(lName);
        cout << "Enter address" << endl;
        getline(cin, address);
        people[x].setAddress(address);
    }
}

void printPeople(Person people[]){
    for(int x = 0; x < 5; x++){
        cout << people[x].getFirstName() << " " << people[x].getLasName()
        << endl;
        cout << people[x].getAddress() << endl;
        cout << "----------------------------------------\n";
    }
}

