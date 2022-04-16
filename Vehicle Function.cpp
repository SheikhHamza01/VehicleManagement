#include "vehicle.h"

Vehicle::Vehicle()
{
	company = NULL;
	color = NULL;
	noOfWheels = 0;
	power = 0;
	type = NULL;
}

Vehicle::Vehicle(char* company, char* color, int wheels, int power, char* type)
{
	int size = strlen(company);
	this->company = new char[size + 1];
	this->company = company;
	int size1 = strlen(color);
	this->color = new char[size1 + 1];
	this->color = color;
	noOfWheels = wheels;
	this->power = power;
	int size2 = strlen(type);
	this->type = new char[size2 + 1];
	this->type = type;
}

void Vehicle::setCompany(char* ptr)
{
	int size = strlen(ptr);
	company = new char[size + 1];
	company = ptr;
}

void Vehicle::setcolor(char* ptr)
{
	int size = strlen(ptr);
	color = new char[size + 1];
	color = ptr;
}

void Vehicle::setNoOfWheels(int a)
{
	noOfWheels = a;
}

void Vehicle::setPower(int a)
{
	power = a;
}

void Vehicle::setType(char* ptr)
{
	int size = strlen(ptr);
	type = new char[size + 1];
	type = ptr;
}

char* Vehicle::getCompany()
{
	return company;
}

char* Vehicle::getcolor()
{
	return color;
}

int Vehicle::getNoOfWheels()
{
	return noOfWheels;
}

int Vehicle::getPower()
{
	return power;
}

char* Vehicle::getType()
{
	return type;
}

Vehicle::~Vehicle()
{
	delete[] company;
	delete[] color;
	delete[] type;
}





