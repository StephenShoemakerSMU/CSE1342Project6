//Stephen Shoemaker
//Program 6
//CSE 1342
//AirTravel.cpp
//November 27, 2018
//This is the definition for the air travel class which is
//derived from the Polluter class
//This class is meant to calculate the carbon footprint a person
//generates every year due to air travel

#include "AirTravel.h"
#include <iostream>
//#include <iomanip>
using namespace std;

//Stephen Shoemaker
//November 27, 2018
//One Arg constructior
//Initializes miles per year to the double input
AirTravel::AirTravel(double initialMPY){
  milesPerYear = initialMPY;
}

//Stephen Shoemaker
//November 27, 2018
//Zero Arg Constructor
//initializes miles per year to 0.0 as a placeholder value
AirTravel::AirTravel(){
  milesPerYear = 0.0;
}

//Stephen Shoemaker
//November 27, 2018
//No Parameters
//Produces a string that includes and describes the emissions due to air travels
//returns the string
string AirTravel::getCarbonFootprint(){
  //cout << "INHERE" << endl;

  //This needs to be more than one line because the first line isnt recognized
  //as a string until it is added into the output string and cant be added
  //to the second line until it is read as a string
  string output = "This person produces ";
  output += to_string(calculateCarbonFootprint());
  output += " pounds of CO2 per year due to air travel";

  return output;
}


//Stephen Shoemaker
//November 27, 2018
//No Parameters
//Returns a double equal to the pounds of CO2 produced every year due to air travel
double AirTravel::calculateCarbonFootprint(){

  //air miles traveled per year ×
  //(average direct emissions per air mile × indirect well-to-pump factor
  //× indirect atmospheric radiative forcing factor)
  // × gram to pound conversion
  double output = milesPerYear * ( 223.0 * 1.2 * 1.9) * .0022;
  return output;
}

//Stephen Shoemaker
//November 27, 2018
//No Paramaters
//Gets user input for miles per year travelled by air
//No Outputs
void AirTravel::inputData(){
  cout << "Getting individual air travel emission data" << endl;
  cout << "Air miles per year: (enter as double)";
  cin >> milesPerYear;
}
