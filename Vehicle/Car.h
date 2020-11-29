#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"


class Car :
	public Vehicle
{
private:
	int numDoors;
public:
	Car() : Vehicle() {
		numDoors = 0;
	}
	void setDoors(int door) {
		numDoors = door;
	}
	int getDoors() {
		return numDoors;
	}

	void displayInfo() {
		cout << "Doors: " << getDoors() << endl;
	}
};

#endif