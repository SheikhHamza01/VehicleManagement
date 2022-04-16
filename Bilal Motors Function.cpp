#include<iostream>
#include"bilal Motors.h"
using namespace std;
Bilal_Motors::Bilal_Motors()
{
	_vehicle = new Vehicle * [size = 1];
	counter = 0;
}
void Bilal_Motors::addVehicle(Vehicle* vehicle)
{
	if (counter >= size)
	{
		array_flexibility();
	}
	_vehicle[counter++] = vehicle;
}

void Bilal_Motors::array_flexibility()
{
	Vehicle** temp = new Vehicle * [size++];
	for (int i = 0; i < size; i++)
	{
		temp[i] = this->_vehicle[i];
	}
	delete[] _vehicle;
	this->_vehicle = temp;
	++size;
}
void Bilal_Motors::search_Vehicle(char* in_typeName)
{
	if (*in_typeName == 'b' || *in_typeName == 'B')
	{
		for (int i = 0; i < counter; i++)
		{
			if (_vehicle[i]->getType()[0] == 'b' || _vehicle[i]->getType()[0] == 'B')
			{
				_vehicle[i]->display();
			}
		}
	}
	else if (*in_typeName == 'c' || *in_typeName == 'C')
	{
		for (int i = 0; i < counter; i++)
		{
			if (_vehicle[i]->getType()[0] == 'c' || _vehicle[i]->getType()[0] == 'C')
			{
				_vehicle[i]->display();
			}
		}
	}
	else if (*in_typeName == 't' || *in_typeName == 'T')
	{
		for (int i = 0; i < counter; i++)
		{
			if (_vehicle[i]->getType()[0] == 't' || _vehicle[i]->getType()[0] == 'T')
			{
				_vehicle[i]->display();
			}
		}
	}

}

Bilal_Motors::~Bilal_Motors()
{
	delete[] _vehicle;
}