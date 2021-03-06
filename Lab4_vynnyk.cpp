#include "pch.h"
#include <iostream>
#include "Elevator_1.cpp"
using namespace std;

int main()
{
	Elevator elevator1;
	elevator1.mYearOfManufacture = 1987;
	elevator1.mCondition = "bad";

	Elevator elevator2("Zaxid Lift", 2000, 550, 15, "passengers");
	elevator2.mYearOfManufacture = 2003;
	elevator2.mCondition = "good";

	Elevator elevator3("CityLift", 3100, 650, 30, "passengers");
	elevator3.mYearOfManufacture = 2017;
	elevator3.mCondition = "excellent";

	cout << "Load Capacity:" << elevator1.getLoadCapacity() << endl;
	cout << "Power consumption of the engine:" << elevator1.getPowerConsumptionOfTheEngine() << endl;
	cout << "Producer:" << elevator1.getProducer() << endl;
	cout << "Number of people in the elevator:" << elevator1.getNumberOfPeopleInTheElevator() << endl;
	cout << "Type of elevator:" << elevator1.getTypeOfElevator() << endl;
	cout << "Year of manufacture:" << elevator1.mYearOfManufacture << endl;
	cout << "Condition:" << elevator1.mCondition << endl;
	cout << endl;

	cout << "Load Capacity:" << elevator2.getLoadCapacity() << endl;
	cout << "Power consumption of the engine:" << elevator2.getPowerConsumptionOfTheEngine() << endl;
	cout << "Producer:" << elevator2.getProducer() << endl;
	cout << "Number of people in the elevator:" << elevator2.getNumberOfPeopleInTheElevator() << endl;
	cout << "Type of elevator:" << elevator2.getTypeOfElevator() << endl;
	cout << "Year of manufacture:" << elevator2.mYearOfManufacture << endl;
	cout << "Condition:" << elevator2.mCondition << endl;
	cout << endl;

	cout << "Load Capacity:" << elevator3.getLoadCapacity() << endl;
	cout << "Power consumption of the engine:" << elevator3.getPowerConsumptionOfTheEngine() << endl;
	cout << "Producer:" << elevator3.getProducer() << endl;
	cout << "Number of people in the elevator:" << elevator3.getNumberOfPeopleInTheElevator() << endl;
	cout << "Type of elevator:" << elevator3.getTypeOfElevator() << endl;
	cout << "Year of manufacture:" << elevator3.mYearOfManufacture << endl;
	cout << "Condition:" << elevator3.mCondition << endl;
	cout << endl;

	//elevator1.showElevatorInfo(elevator1);
	//elevator2.showElevatorInfo(elevator2);
	//elevator3.showElevatorInfo(elevator3);
}