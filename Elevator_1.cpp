#include "pch.h"
#include <iostream>
#include <string>
#include "Elevator_1.h"

Elevator::Elevator()
{
}
Elevator::~Elevator()
{
}
int Elevator::getLoadCapacity()
{
	return mLoadCapacity;
}
int Elevator::getPowerConsumptionOfTheEngine()
{
	return mPowerConsumptionOfTheEngine;
}
string Elevator::getProducer()
{
	return mProducer;
}
int Elevator::getNumberOfPeopleInTheElevator()
{
	return mNumberOfPeopleInTheElevator;
}
string Elevator::getTypeOfElevator()
{
	return mTypeOfElevator;
}