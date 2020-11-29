#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>


using namespace std;

class Vehicle
{
private:
	string vManufacturer;
	int vYearBuilt;
public:
	Vehicle() 
	{
		vManufacturer = "";
		vYearBuilt = 0;
	}

	void setManu(string manu) {
		vManufacturer = manu;
	}
	void setYear(int year) {
		vYearBuilt = year;
	}

	string getManu() {
		return vManufacturer;
	}

	int getYear() {
		return vYearBuilt;
	}

	void displayInfo() {
		cout << "Manufacturer: " << getManu() << endl;
		cout << "Year Built: " << getYear() << endl;
	}
};

#endif 