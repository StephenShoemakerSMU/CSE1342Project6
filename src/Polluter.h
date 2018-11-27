#ifndef POLLUT
#define POLLUT
#include <string>
#include <iostream>

using namespace std;
class Polluter{
  public:

    virtual string getCarbonFootprint();
    virtual double calculateCarbonFootprint();
    void outputCarbonFootprint();
    virtual void inputData();
    ~Polluter();
};


#endif
