#pragma once
#include<iostream>
#include"Vehicle.h"
using namespace std;
class Bilal_Motors
{
private:
	Vehicle** _vehicle;
	int counter;
	int size;
public:
	Bilal_Motors();
	void addVehicle(Vehicle*);
	void search_Vehicle(char*);
	~Bilal_Motors();
	void array_flexibility();
};