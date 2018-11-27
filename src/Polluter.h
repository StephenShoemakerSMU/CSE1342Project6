#ifndef POLLUT
#define POLLUT
#include <string>
#include <iostream>

using namespace std;
class Polluter{
  public:

    virtual string getCarbonFootprint(){return "";};
    virtual double calculateCarbonFootprint(){return -1.0;};
    void outputCarbonFootprint(){ cout << getCarbonFootprint() << endl; };
    virtual void inputData(){};
    ~Polluter();
};


#endif
