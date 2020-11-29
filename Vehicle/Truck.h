#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck :
	public Vehicle
{
private:
	double towingCap;
public:

	Truck() : Vehicle() {
		towingCap = 0;
	}

	void setTowing(double tow) {
		towingCap = tow;
	}

	double getTowing() {
		return towingCap;
	}

	void displayInfo() {
		cout << "Towing Capacity: " << getTowing() << endl;
	}

};

#endif // !VEHICLE_H
