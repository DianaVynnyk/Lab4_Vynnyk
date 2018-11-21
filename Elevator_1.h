#pragma once
#include <iostream>
#include <string>
using namespace std;

class Elevator
{
private:
	int mLoadCapacity;
	int mPowerConsumptionOfTheEngine;
	string mProducer;
protected:
	int mNumberOfPeopleInTheElevator;
	string mTypeOfElevator;
public:
	Elevator() :
		mLoadCapacity(2000),
		mPowerConsumptionOfTheEngine(550),
		mProducer("Zaxid Lift"),
		mNumberOfPeopleInTheElevator(15),
		mTypeOfElevator("passengers") 
	{
	}
	Elevator(string Producer, int LoadCapacity, int PowerConsumptionOfTheEngine, int NumberOfPeopleInTheElevator, string TypeOfElevator) :
		mLoadCapacity(LoadCapacity),
		mProducer(Producer),
		mPowerConsumptionOfTheEngine(PowerConsumptionOfTheEngine),
		mNumberOfPeopleInTheElevator(NumberOfPeopleInTheElevator),
		mTypeOfElevator(TypeOfElevator)
	{
	}
	~Elevator();
	int getLoadCapacity();
	int getPowerConsumptionOfTheEngine();
	string getProducer();
	int getNumberOfPeopleInTheElevator();
	string getTypeOfElevator();
	int mYearOfManufacture;
	string mCondition;
};