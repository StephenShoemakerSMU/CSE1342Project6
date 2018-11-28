#ifndef HOME
#define HOME

#include "Polluter.h"
#include <string>
using namespace std;
class InHomeEnergy: public Polluter{
  public:
    InHomeEnergy(double);
    InHomeEnergy();
    virtual string getCarbonFootprint();
    virtual void inputData();
    virtual double calculateCarbonFootprint();
  private:
    double averageElectricBill;
};

#endif
