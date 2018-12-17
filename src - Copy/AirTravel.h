//Stephen Shoemaker
//Program 6
//CSE 1342
//November 27, 2018
//AirTravel.h
//This is the AirTravel header that outlines all the functions
//Present in the Air Travel Class
//This class is derived from the Polluter class and is used to calculate
//The carbon footprint an individual makes due to air travel

#ifndef AIRTRAVEL
#define AIRTRAVEL

#include "Polluter.h"
#include <string>
using namespace std;


class AirTravel:public Polluter{
  public:
    //Constructors
    AirTravel(double);
    AirTravel();

    //Derived Functions

    //Returns a string with the carbon footprint
    virtual string getCarbonFootprint();

    //Gets input data for carbon emmisions
    virtual void inputData();

    //Calculates and returns the carbon footprint
    virtual double calculateCarbonFootprint();

  private:
    //miles travelled per year in the air
    double milesPerYear;
};

#endif
