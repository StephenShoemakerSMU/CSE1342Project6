#ifndef AIRTRAVEL
#define AIRTRAVEL

#include "Polluter.h"
#include <string>
using namespace std;
class AirTravel:public Polluter{
  public:
    AirTravel(double);
    AirTravel();
    string getCarbonfootprint();
    void inputData();
    double calculateCarbonFootprint();
  private:
    double milesPerYear;
};

#endif
