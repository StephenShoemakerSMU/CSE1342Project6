#ifndef HOME
#define HOME

#include "Polluter.h"
#include <string>
using namespace std;
class InHomeEnergy: public Polluter{
  public:
    InHomeEnergy(double);
    InHomeEnergy();
    string getCarbonfootprint();
    void inputData();
    double calculateCarbonFootprint();
  private:
    double averageElectricBill;
};

#endif
