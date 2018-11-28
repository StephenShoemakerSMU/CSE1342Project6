#include "AirTravel.h"
#include <iostream>
#include <iomanip>
using namespace std;

AirTravel::AirTravel(double initialMPY){
  milesPerYear = initialMPY;
}

AirTravel::AirTravel(){
  milesPerYear = -1.0;
}

string AirTravel::getCarbonfootprint(){
  cout << "INHERE" << endl;
  string output = "This person produces ";
  output += to_string(calculateCarbonFootprint());
  output += " pounds of CO2 per year due to air travel";
  return output;
}

double AirTravel::calculateCarbonFootprint(){

  //air miles traveled per year ×
  //(average direct emissions per air mile × indirect well-to-pump factor
  //× indirect atmospheric radiative forcing factor)
  // × gram to pound conversion
  double output = milesPerYear * ( 223.0 * 1.2 * 1.9) * .0022;
  return output;
}

void AirTravel::inputData(){
  cout << "Getting individual air travel emission data" << endl;
  cout << "Air miles per year: (enter as double)";
  cin >> milesPerYear;
}
