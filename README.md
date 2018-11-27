# CSE1342Project6
Program 6 – Carbon Footprint
Due Date: Monday Dec. 3 2018 at 11:59 pm ; no lates accepted
Scenario
Governments and companies worldwide have become increasingly concerned with carbon footprints (annual releases of carbon dioxide into the atmosphere.) A carbon footprint refers to the amount of carbon dioxide produced by your day-to-day activities and the items you use such as cars, flights, electricity etc.
Your Task
You are going to write a series of three classes that have a virtual function that calculates that object’s carbon footprint.  These classes should inherit from an abstract base class (Polluter) with only a pure virtual function, getCarbonfootprint.  Each of your derived classes will inherit from the abstract base class and will implement the getCarbonfootprint member function that calculates an appropriate carbon footprint for that class.  
Your main driver will create objects of those three classes, place pointers to those objects in a vector of base class pointers, then iterate through the vector polymorphically invoking each objects’ getCarbonfootprint member function.  For each object print some identifying information and the object’s carbon footprint.
Below is a list of possible classes and how the carbon footprint would be calculated for those objects.( http://www.carbonglobe.com/carbon-footprint-formula.php)  Choose your three derived classes from the following list.  Your classes will have appropriate attributes and methods to display the required information.
In the Transportation category of activity
Vehicles
CO2 emissions in pounds = ((number of miles driven per week × weeks in a year) ÷ fuel efficiency per vehicle× pounds of CO2 emitted per gallon × emissions of greenhouse gases other than CO2))
Pounds of CO2 emitted per gallon = 19.4
Emissions of greenhouse gases other than CO2 = 100 ÷ 95
 Air Travel
CO2 emissions in pounds = air miles traveled per year × (average direct emissions per air mile × indirect well-to-pump factor × indirect atmospheric radiative forcing factor) × gram to pound conversion
Average emissions per mile = 223
Indirect well-to-pump factor = 1.2
Indirect atmospheric radiative forcing factor = 1.9
Gram to pound conversion = .0022

In the Home Energy category of activity
Electricity
CO2 emissions in pounds = (average amount of electric bill per month ÷ price per kwh) × electricity emissions factor × months in a year
Price per kwh average = $0.20
Electricity emissions factor = 1.37
Natural Gas
CO2 emissions in pounds = (average amount of natural gas bill per month ÷ price per thousand cubic feet) × natural gas emissions factor × months in a year
Price per thousand cubic feet average  $14.14
Natural gas emissions factor = 120.61
Diet and Eating Habits
Food
CO2 emissions in pounds = Sum of food categories [ (dollars spent on each category per month × emissions factor for each category × months in a year) × gram to pound conversion ]
Meat, fish, & eggs emissions factor = 1452
Cereals & Bakery Products emissions factor = 741
Dairy emissions factor = 1911
Fruits & vegetables emissions factor = 1176
Eating out emissions factor = 368
Other foods emissions factor = 467
Gram to pound conversion = .0022

Input
    Your input can come from the keyboard or a file.
Output
     A nicely formatted display of all the data with the calculated carbon footprint
Implementation Requirements
•	Your implementation must be object oriented with at least three classes plus a main driver.
•	Each class must be separated into interface (.h file) and implementation (.cpp file).
Code Formatting and Grading
•	https://s2.smu.edu/~etchison/cse1342/pguide.doc
