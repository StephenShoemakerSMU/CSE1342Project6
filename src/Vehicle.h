//Stephen Shoemaker
//Program 6
//CSE 1342
//November 27, 2018
//Vehicle.h
//Header for Vehicle class that is derived from polluter
//This class stores and calculates the emmission data for a vehicle
#ifndef VEHICLE
#define VEHICLE

#include "Polluter.h"
#include <string>
using namespace std;
class Vehicle:public Polluter{
  public:
    //Constructors
    Vehicle (double, double);
    Vehicle();

    //Returns a string with the carbon footprint
    virtual string getCarbonFootprint();

    //Gets input data for carbon emmisions
    virtual void inputData();

    //Calculates and returns the carbon footprint
    virtual double calculateCarbonFootprint();
  private:
    double milesPerWeek;
    double fuelEfficiency;
};

#endif
