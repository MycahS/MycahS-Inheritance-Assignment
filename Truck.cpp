/* Mycah L. Shaw
   Jeffery Sommer
   CIS 1202
   24 November 2020
   Inheritance */
#include "Truck.h"
#include <iostream>


using std::cout;
using std::endl;
//Default constructor
Truck::Truck()
{
	towingCapacity = 0;
}
//Constructor with arguments
Truck::Truck(int t)
{
	towingCapacity = t;
};
//Sets the towning capacity
void Truck::setCapacity(int t)
{
	towingCapacity = t;
};
//Gets the towing capacity or returns it
int Truck::getCapacity()
{
	return towingCapacity;
};
//Displays Truck Information
void Truck::displayTruckInfo()
{
	displayInfo();
	cout << "Towing Capacity: " << this->towingCapacity << endl;
};
