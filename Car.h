#pragma once
//Header file for "Car"
#ifndef CAR_H
#define CAR_H
#include <string>
#include "Vehicle.h"



class Car : public Vehicle
{
	private:
		int doors;


	public:
		//Car(std::string m, int y, int d) : Vehicle(m, y) { };
		Car();
		Car(int d);
		void setNumOfDoors(int d);
		int getNumOfDoor();
		void displayCarInfo();
	
};
#endif

