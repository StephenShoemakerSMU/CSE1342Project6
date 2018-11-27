#include "Vehicle.h"
#include <iostream>
using namespace std;
Vehicle::Vehicle(double initialMPW, double initialFuelEff){
  milesPerWeek = initialMPW;
  fuelEfficiency = initialFuelEff;
}

Vehicle::Vehicle(){
  milesPerWeek = -1;
  fuelEfficiency = -1;
}

string Vehicle::getCarbonFootprint(){
  string output = "This vehicle produces ";
  output += to_string(calculateCarbonFootprint());
  output += " pounds of CO2 per year";
  return output;
}

double Vehicle::calculateCarbonFootprint(){

  // ((number of miles driven per week × weeks in a year) ÷ fuel efficiency per vehicle
  // x pounds of CO2 emitted per gallon × emissions of greenhouse gases other than CO2))
  double output =( ( milesPerWeek * 52.0 ) / fuelEfficiency * 19.4 * 100 / 95);
  cout << output << endl;
  return output;
}

void Vehicle::inputData(){
  cout << "Vehicle's miles per week: (enter as double) ";
  cin >> milesPerWeek;
  cout << "Vehicles fuel efficiency: (enter as double) ";
  cin >> fuelEfficiency;
}
