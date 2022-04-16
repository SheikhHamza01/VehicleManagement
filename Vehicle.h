#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
using namespace std;

class Vehicle
{
protected:
	char* company;
	char* color;
	int noOfWheels;
	int power;
	char* type;

public:

	Vehicle();

	Vehicle(char*, char*, int, int, char*);

	void setCompany(char* ptr);

	void setcolor(char* ptr);

	void setNoOfWheels(int a);

	void setPower(int a);

	void setType(char* ptr);

	char* getCompany();

	char* getcolor();

	int getNoOfWheels();

	int getPower();

	char* getType();

	virtual void checkType() = 0;

	virtual void display() = 0;

	~Vehicle();
};






