//Stephen Shoemaker
//Program 6
//CSE 1342
//November 28, 2018
//main.cpp
//This is the main class for Project 6
//The purpose of this program is to generate an abstract polluter class
//And then create three different subclasses that derive the getCarbonFootprint
//function in order to store and calculate different types of polluters in
//the same vector

//My three sub polluters ar AirTravel, InHomeEnergy, and Vehicle
//All three of the subclasses can get input from the user, calculate the
//carbon footprint, generate a string of the carbon footprint, and output
//the string to the console using the same function prototype but different
//defintions to reflect their differences in calculations for carbon footprint

//The main function initializes the three polluters, puts them in a vector
// gets their input data then outputs their pollution data to the console

#include "Polluter.h"
#include "Vehicle.h"
#include "AirTravel.h"
#include "InHomeEnergy.h"
#include <vector>
#include <iostream>
using namespace std;


int main(){

  //Test 1, Create a single polluter and polluter subclass and test it
  /*
  Polluter* polluterPointer1 = new Vehicle();
  polluterPointer1->inputData();
  polluterPointer1->outputCarbonFootprint();
  */
  //Test 2, Create three different Polluters with different subclasses and output them

  /*
  Polluter* vehiclePointer = new Vehicle();
  vehiclePointer->inputData();

  Polluter* airTravelPointer = new AirTravel();
  airTravelPointer->inputData();

  Polluter* homePointer = new InHomeEnergy();
  homePointer->inputData();


  vehiclePointer->outputCarbonFootprint();
  airTravelPointer->outputCarbonFootprint();
  homePointer->outputCarbonFootprint();
  */

  //Test 3 And Submission, Do it in a list

  //Initializing the vector of polluter pointers
  vector<Polluter*> polluters;

  //Adding the polluters to the vector
  polluters.push_back(new Vehicle());
  polluters.push_back(new AirTravel());
  polluters.push_back(new InHomeEnergy());


  //Getting user data to the polluters
  cout << endl << "Inputting Pollution Data:" << endl;

  for(int index = 0; index < polluters.size(); index++){
    polluters.at(index)->inputData();
    cout << endl;
  }

  //Outputting the pollution data to the console
  cout << "Outputting Pollution Data: " << endl;

  for(int index = 0; index < polluters.size(); index++){
    polluters.at(index)->outputCarbonFootprint();
    cout << endl;
  }

  //fin

  return 0;
}
