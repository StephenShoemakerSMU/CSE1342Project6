#include "InHomeEnergy.h"
#include <iostream>
using namespace std;

InHomeEnergy::InHomeEnergy(double intitialAvgBill){
  averageElectricBill = intitialAvgBill;
}

InHomeEnergy::InHomeEnergy(){
  averageElectricBill = -1.0;
}

string InHomeEnergy::getCarbonfootprint(){
  cout << "INHERE" << endl;
  string output = "This house produces ";
  output += to_string(calculateCarbonFootprint());
  output += " pounds of CO2 per year";
  return output;
}

double InHomeEnergy::calculateCarbonFootprint(){

  //Average electric bill ÷ average kw/$ * KW emission factor

  double output = (averageElectricBill / 0.20) * 1.37;
  return output;
}

void InHomeEnergy::inputData(){
  cout << "Getting home emission data" << endl;
  cout << "Average Electric Bill: (Enter as double without dollar sign)";
  cin >> averageElectricBill;
}
