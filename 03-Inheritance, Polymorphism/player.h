// ##################################################
// File: player.h
// Author: Eric Hunter
// Date: Feb 06, 2021
// Description: Contains the player class which is derived from the Person class.
// ##################################################

#ifndef INC_03_INHERITANCE__POLYMORPHISM_PLAYER_H
#define INC_03_INHERITANCE__POLYMORPHISM_PLAYER_H

#include "person.h"

class Player : public Person {

private:

    double mAverage;
    double mSluggingPercentage;
    double mOnBasePercentage;

public:

    Player();
    Player(string const &first, string const &last, string const &address,
           double average, double slugging, double onBase);

    void setAverage(double avg);
    void setSlugging(double slug);
    void setOBP(double onBase);

    void print();

    double getAverage();
    double getSlugging();
    double getOBP();


};

#endif //INC_03_INHERITANCE__POLYMORPHISM_PLAYER_H
