/* Mycah L. Shaw
   Jeffery Sommer
   CIS 1202
   24 November 2020
   Inheritance */
#include "Car.h"
#include <iostream>
#include <cstdlib>


using namespace std;


Car::Car()
{
	doors = 0;
}
Car::Car(int d)
{
	doors = d;
};
void Car:: setNumOfDoors(int d)
{
	doors = d;
};
int Car:: getNumOfDoor()
{
	return doors;
};


void Car::displayCarInfo()
{
	displayInfo();
	cout << "Doors: " << this->doors << endl;
};

