#ifndef AIRTRAVEL
#define AIRTRAVEL

#include "Polluter.h"
#include <string>
using namespace std;
class AirTravel:public Polluter{
  public:
    AirTravel(double);
    AirTravel();
    virtual string getCarbonFootprint();
    virtual void inputData();
    virtual double calculateCarbonFootprint();
  private:
    double milesPerYear;
};

#endif
