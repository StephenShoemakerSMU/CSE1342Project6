//Stephen Shoemaker
//Program 6
//CSE 1342
//November 27, 2018
//Polluter header class
//Polluter is meant to be ab "abstract" class that other classes derive from
//The purpose of this class is to be a template for polluter classes that share
//These functionalities:
// 1. Able to take user emmission data from the console
// 2. Able to calculate the carbon footprint
// 3. Able to generate a string based on the emmision data that can be read
//    in a user friendly manor

#ifndef POLLUT
#define POLLUT
#include <string>
#include <iostream>

using namespace std;
class Polluter{
  public:

    //generate a string based on the emmision data that can be read
    //in a user friendly manor
    virtual string getCarbonFootprint();

    // calculate the carbon footprint
    virtual double calculateCarbonFootprint();

    //This is the only defined function
    //outputs getCarbonFootprint to the console
    void outputCarbonFootprint();

    //take user emmission data from the console
    virtual void inputData();

    //Destructor
    ~Polluter();
};


#endif
