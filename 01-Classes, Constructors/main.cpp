#include <iostream>
#include "Person.h"

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
    string tmp;
    for(int x = 0; x < 5; x++){
        people[x] = new Person();
        cout << "Enter first name" << endl;
        cin >> tmp;
        people[x].setFirstName(tmp);
        cout << "Enter last name" << endl;
        cin >> tmp;
        people[x].setLastName(tmp);
        cout << "Enter address" << endl;
        cin >> tmp;
        people[x].setAddress(tmp);
    }
}

void printPeople(Person people[]){
    for(int x = 0; x < 5; x++){
        cout << people[x].getFirstName() << " " << people[x].getLasName()
        << endl;
        cout << people[x].getAddress() << endl << endl;
        cout << "----------------------------------------\n";
    }
}

