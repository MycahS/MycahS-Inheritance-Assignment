/* Mycah L. Shaw
   Jeffery Sommer
   CIS 1202
   24 November 2020
   Inheritance */
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
#include <string>


using namespace std;

//Main Function
int main()
{
	//Vehicle Program---------------------------------------------------------
	Vehicle v; //vehicle object

	//variables to store information
	string m;
	int y;
	cout << "Vehicle Program" << endl; 
	cout << endl;

	cout << "Vehicle: " << endl;
	
	cout << "Enter the manufacturer : " << endl;
	getline(cin, m);
	v.setManufacturer(m);
	
	cout << "Enter the year built: " << endl;
	cin >> y;
	v.setYear(y);
	
	v.displayInfo();

	cout << endl;


	
	//Car Program---------------------------------------------------------------
	Car c; //car object

	//variables to store information.
	string theManufacturer;
	int theYear, numOfDoors;

	cout << "Car: " << endl;

	cout << "Enter the manufacturer : " << endl;
	cin.ignore();
	getline(cin, theManufacturer);
	c.setManufacturer(theManufacturer);

	cout << "Enter the year built: " << endl;
	cin >> theYear;
	c.setYear(theYear);
	
	cout << "Enter the number of doors: " << endl;
	cin >> numOfDoors;
	c.setNumOfDoors(numOfDoors);

	c.displayCarInfo();

	cout << endl;


	//Truck Program---------------------------------------------------------------
	Truck t; //truck object

	//variables to store information.
	string theManufacturers;
	int theYears, towingCapacity;

	cout << "Truck: " << endl;

	cout << "Enter the manufacturer : " << endl;
	cin.ignore();
	getline(cin, theManufacturers);
	t.setManufacturer(theManufacturers);

	cout << "Enter the year built: " << endl;
	cin >> theYears;
	t.setYear(theYears);

	cout << "Enter the towing capacity " << endl;
	cin >> towingCapacity;
	t.setCapacity(towingCapacity);

	t.displayTruckInfo();
}