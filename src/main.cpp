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

  vector<Polluter*> polluters;
  polluters.push_back(new Vehicle());
  polluters.push_back(new AirTravel());
  polluters.push_back(new InHomeEnergy());

  cout << endl << "Inputting Pollution Data:" << endl;
  for(int index = 0; index < polluters.size(); index++){
    polluters.at(index)->inputData();
    cout << endl;
  }

  cout << "Outputting Pollution Data: " << endl;

  for(int index = 0; index < polluters.size(); index++){
    polluters.at(index)->outputCarbonFootprint();
    cout << endl;
  }


  return 0;
}
