//Stephen Shoemaker
//Program 6
//CSE 1342
//November 27, 2018
//Vehicle.cpp
//Definition for the Vehicle class derived from the Polluter class
//The Vehicle class reads data from the user, calculates the carbonFootprint
//And creates a string based on the carbon footprint

#include "Vehicle.h"
#include <iostream>
//#include <iomanip>
using namespace std;

//Stephen Shoemaker
//November 27, 2018
//Two-Argument Constructor
//Takes two doubles as input
//Sets milesPerWeek and fuelEfficiency to the inputs
Vehicle::Vehicle(double initialMPW, double initialFuelEff){
  milesPerWeek = initialMPW;
  fuelEfficiency = initialFuelEff;
}

//Stephen Shoemaker
//November 27, 2018
//Zero - arg constructor
//Sets class members to place holder zero
Vehicle::Vehicle(){
  milesPerWeek = 0;
  fuelEfficiency = 0;
}

//Stephen Shoemaker
//November 27, 2018
//This function generates a string that describes the vehicles carbon footprint
//No paramaters
//returns a string with the carbon footprint
string Vehicle::getCarbonFootprint(){
  //cout << "INHERE" << endl;


  //This needs to be more than one line because the first line isnt recognized
  //as a string until it is added into the output string and cant be added
  //to the second line until it is read as a string
  string output = "This vehicle produces ";
  output += to_string(calculateCarbonFootprint());
  output += " pounds of CO2 per year";

  return output;
}

//Stephen Shoemaker
//November 27, 2018
//Calculates the vehicles carbon footprint
//no Parameters
//returns the double carbon footprint
double Vehicle::calculateCarbonFootprint(){

  // ((number of miles driven per week × weeks in a year) ÷ fuel efficiency per vehicle
  // x pounds of CO2 emitted per gallon × emissions of greenhouse gases other than CO2))
  double output =( ( milesPerWeek * 52.0 ) / fuelEfficiency * 19.4 * 100 / 95);
  //cout << setprecision(2) << fixed << output << endl;
  return output;
}

//Stephen Shoemaker
//November 27, 2018
//Takes the user data for the vehicles emmision data
//No Input
//Returns nothing
void Vehicle::inputData(){
  cout << "Getting individual vehicle emission data" << endl;
  cout << "Vehicle's miles per week: (enter as double) ";
  cin >> milesPerWeek;
  cout << "Vehicles fuel efficiency: (enter as double) ";
  cin >> fuelEfficiency;
}
