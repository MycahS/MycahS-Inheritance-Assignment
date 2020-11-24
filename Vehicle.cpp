/* Mycah L. Shaw
   Jeffery Sommer
   CIS 1202
   24 November 2020
   Inheritance */
#include "Vehicle.h"
#include <iostream>
#include <cstdlib>

using namespace std;
Vehicle::Vehicle()
{
	manufacturer = "";
	year = 0;
}

Vehicle::Vehicle(string m, int y)
{
	manufacturer = m;
	year = y;
};
void Vehicle:: setManufacturer(string m)
{
	manufacturer = m;
};
void Vehicle:: setYear(int y) 
{
	year = y;
};
string Vehicle:: getManufacturer() 
{
	return manufacturer;
};
int Vehicle:: getYear() 
{
	return year;
};
void Vehicle:: displayInfo()
{
	cout << "Vehicle Information: " << endl;
	cout << "Manufacturer: " << this->manufacturer << endl;
	cout << "Year Built: " << this->year << endl;
};

