#pragma once
/* Mycah L. Shaw
   Jeffery Sommer
   CIS 1202
   24 November 2020
   Inheritance */
#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>



class Vehicle
{
private:
	std::string manufacturer;
	int year;
	int stock;


public:
	Vehicle();
	Vehicle(std::string m, int y);
	void setManufacturer(std::string m);
	void setYear(int y);
	std::string getManufacturer();
	int getYear();
	void displayInfo();


};
#endif

