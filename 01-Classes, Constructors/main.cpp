#include <iostream>
#include <string>
#include "person.h"

using namespace std;
void getPeople(Person people[]);
void printPeople(Person people[]);

int main() {
    //create a variable to hold number of objects in array
    Person people[2];

    getPeople(people);
    printPeople(people);

    return 0;
}

void getPeople(Person people[]){
    string shuttle;
    //have for loop dynamically get the size of array
    for(int x = 0; x < 2; x++){

        cout << "Enter first name" << endl;
        getline(cin, shuttle);
        people[x].setFirstName(shuttle);
        cout << "Enter last name" << endl;
        getline(cin, shuttle);
        people[x].setLastName(shuttle);
        cout << "Enter address" << endl;
        getline(cin, shuttle);
        people[x].setAddress(shuttle);
    }
}

void printPeople(Person people[]){
    //have for loop dynamically get the size of array
    for(int x = 0; x < 5; x++){
        cout << people[x].getFirstName() << " " << people[x].getLasName()
        << endl;
        cout << people[x].getAddress() << endl;
        cout << "----------------------------------------\n";
    }
}

