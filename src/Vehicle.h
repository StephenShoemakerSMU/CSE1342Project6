#ifndef VEHICLE
#define VEHICLE

#include "Polluter.h"
#include <string>
using namespace std;
class Vehicle:public Polluter{
  public:
    Vehicle (double, double);
    Vehicle();
    virtual string getCarbonFootprint();
    virtual void inputData();
    virtual double calculateCarbonFootprint();
  private:
    double milesPerWeek;
    double fuelEfficiency;
};

#endif
