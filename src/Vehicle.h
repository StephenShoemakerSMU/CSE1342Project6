#ifndef VEHICLE
#define VEHICLE

#include "Polluter.h"
#include <string>
using namespace std;
class Vehicle:public Polluter{
  public:
    Vehicle (double, double);
    Vehicle();
    string getCarbonFootprint();
    void inputData();
    double calculateCarbonFootprint();
  private:
    double milesPerWeek;
    double fuelEfficiency;
};

#endif
