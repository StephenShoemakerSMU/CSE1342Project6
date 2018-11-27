#include "Polluter.h"
#include "Vehicle.h"

int main(){

  //Test 1, Create a single polluter and polluter subclass and test it
  Polluter* polluterPointer1 = new Vehicle();
  polluterPointer1->inputData();
  polluterPointer1->outputCarbonFootprint();

  //Test 2, Create three different Polluters with different subclasses and output them

  //Test 3, Do it in a list


  return 0;
}
