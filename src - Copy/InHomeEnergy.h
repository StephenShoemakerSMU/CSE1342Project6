//Stephen Shoemaker
//Program 6
//CSE 1342
//November 27, 2018
//InHomeEnergy.h
//Header for InHomeEnergy class that is derived from polluter
//This class stores and calculates the emmission data for a home
#ifndef HOME
#define HOME

#include "Polluter.h"
#include <string>
using namespace std;
class InHomeEnergy: public Polluter{
  public:
    //Constructors
    InHomeEnergy(double);
    InHomeEnergy();

    //Derived Functions

    //Returns a string with the carbon footprint
    virtual string getCarbonFootprint();

    //Gets input data for carbon emmisions
    virtual void inputData();

    //Calculates and returns the carbon footprint
    virtual double calculateCarbonFootprint();

  private:
    double averageElectricBill;
};

#endif
