// ##################################################
// File: player.cpp
// Author: Eric Hunter
// Date: Feb 06, 2021
// Description: contains Player class functions and methods. 
// ##################################################
#include <iostream>
#include "player.h"


Player::Player() {};


// ################################################################
// @par Name
// Player working constructor
// @purpose
// Sets attributes from Player and Person
// @param [in]:
// First and last name, address, average, slugging and on base percentages
// @return
// none
// @par References
// None
// @par Notes
// None
// ################################################################
Player::Player(string const &first, string const &last, string const &address,
               double average, double slugging, double onBase) {
    setFirstName(first);
    setLastName(last);
    setAddress(address);
    setAverage(average);
    setSlugging(slugging);
    setOBP(onBase);
};


void Player::setAverage(double avg) {
    mAverage = avg;
};


void Player::setSlugging(double slug) {
    mSluggingPercentage = slug;
};


void Player::setOBP(double onBase) {
    mOnBasePercentage = onBase;
};


double Player::getAverage() {
    return this->mAverage;
};


double Player::getSlugging() {
    return this->mSluggingPercentage;
};


double Player::getOBP() {
    return this->mOnBasePercentage;
};


// ################################################################
// @par Name
// Print
// @purpose
// Displays Player object
// @param [in]:
// void
// @return
// none
// @par References
// None
// @par Notes
// Print is a virtual function from Person class. 
// ################################################################
void Player::print() {

    std::cout << getFirstName() << " " << getLasName() << std::endl;
    std::cout << "Average: " << getAverage() << std::endl;
    std::cout << "Slugging Percent: " << getSlugging() << std::endl;
    std::cout << "On Base Percentage: " << getOBP() << std::endl;
}


