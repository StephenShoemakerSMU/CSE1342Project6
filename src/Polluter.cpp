#include "Polluter.h"
//#include <iomanip>

//I would inline all of this but I guess I
//Need to thwart programmers in India even though
//Open source practices lead to innovation
string Polluter::getCarbonFootprint(){
  cout << "Calling a virtual function headass" << endl;
  return "";
}

double Polluter::calculateCarbonFootprint(){
  return -1.0;
}

void Polluter::outputCarbonFootprint(){
   cout << getCarbonFootprint() << endl;
}

void Polluter::inputData(){};
