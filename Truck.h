#pragma once
//Header file for "Truck"
/* Mycah L. Shaw
   Jeffery Sommer
   CIS 1202
   24 November 2020
   Inheritance */
#ifndef TRUCK_H
#define TRUCK_H
#include <string>
#include "Vehicle.h"



class Truck: public Vehicle
{
private:
	int towingCapacity;


public:
	
	Truck();
	Truck(int t);
	void setCapacity(int t);
	int getCapacity();
	void displayTruckInfo();

};
#endif
