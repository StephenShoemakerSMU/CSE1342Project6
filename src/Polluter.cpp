//Stephen Shoemaker
//Program 6
//CSE 1342
//November 27, 2018
//Polluter definition class
//This class is the super class for polluter objects
//Other than the outputCarbonFootprint, none of these functions should be CALLED
//The purpose of this class is to have polluter sub classes that are all
//able to get user data, calculate the carbon footprint, generate a
//string with the carbon footprint, and then output it to the console
#include "Polluter.h"

//Stephen Shoemaker
//November 27, 2018
//This function outputs getCarbonFootprint to console
//No paramaters
//Returns nothing
void Polluter::outputCarbonFootprint(){
   cout << getCarbonFootprint() << endl;
}

//I would inline all of this in the header but I guess I
//Need to thwart programmers in India even though
//Open source practices lead to innovation

//Stephen Shoemaker
//November 27, 2018
//Dummy function that should not be called
//Derived classes should calculate their carbon footprint and put it
//to a string in a user friendly format
//Returns an empty string
string Polluter::getCarbonFootprint(){
  cout << "ERROR: Polluter.getCarbonFootprint() SHOULD NOT BE CALLED" << endl;
  cout << "       GENERATE A DERIVED CLASS INSTEAD" << endl;
  return "";
}

//Stephen Shoemaker
//November 27, 2018
//Dummy function that should nnot be called
//derived classes should calculate their carbon footprint and return it
//returns -1.0
double Polluter::calculateCarbonFootprint(){
  cout << "ERROR: Polluter.calculateCarbonFootprint() SHOULD NOT BE CALLED" << endl;
  cout << "       GENERATE A DERIVED CLASS INSTEAD" << endl;
  return -1.0;
}



//Stephen Shoemaekr
//November 27, 2018
//Dummy function that should not be called
//derived classes should have their own inputDAta function
//returns nothing
void Polluter::inputData(){
  cout << "ERROR: Polluter.inputData() SHOULD NOT BE CALLED" << endl;
  cout << "       GENERATE A DERIVED CLASS INSTEAD" << endl;
}
