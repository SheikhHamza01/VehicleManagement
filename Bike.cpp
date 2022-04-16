#include "Vehicle.h"
#include "Bike.h"

int Bike::noOfBikes = 0;

Bike::Bike()
{
	height = 0;
	selfStart = true;
	brake = true;
}

Bike::Bike(char* company, char* color, int wheels, int power, char* type, double height, bool start, bool brake) :Vehicle(company, color, wheels, power, type)
{
	this->height = height;
	this->selfStart = start;
	this->brake = brake;
	noOfBikes++;
}

Bike::Bike(char* company, char* color, int wheels, int power, char* type, const Bike& obj) :Vehicle(company, color, wheels, power, type)
{
	this->height = obj.height;
	this->selfStart = obj.selfStart;
	this->brake = obj.brake;
	noOfBikes++;
}

void Bike::setHeight(double height)
{
	this->height = height;
}

void Bike::setstart(bool start)
{
	selfStart = start;
}

void Bike::setbrake(bool brake)
{
	this->brake = brake;
}

double Bike::setHeight()
{
	return height;
}

bool Bike::getstart()
{
	return selfStart;
}

bool Bike::getbrake()
{
	return brake;
}

void Bike::checkType()
{
	int wheels;
	cout << "Enter wheels: ";
	cin >> wheels;
	char type[4] = { 'B','i','k','e' };
	char* type_check = new char[4];
	type_check = type;
	if (wheels == 2)
	{
		setType(type_check);
	}
}
void Bike::display()
{
	cout << left << setw(10) << "Company" << setw(10) << "Color" << setw(10) << "Wheels" << setw(7) << "Power" << setw(8) << "Type" << setw(8) << "Height" << setw(12) << "Self-Start" << "Disc-brake" << endl;
	cout << "----------------------------------------------------------------------------";
	cout << left << setw(10) << company << setw(10) << color << setw(10) << noOfWheels << setw(7) << power << setw(8) << type << setw(8) << height << setw(12) << selfStart << brake << endl;
}

Bike::~Bike()
{

}

Bike Bike::operator=(const Bike& obj)
{
	Bike temp;
	temp.company = obj.company;
	temp.color = obj.color;
	temp.type = obj.type;
	temp.noOfWheels = obj.noOfWheels;
	temp.power = obj.power;
	temp.height = obj.height;
	temp.selfStart = obj.selfStart;
	temp.brake = obj.brake;
	return temp;
}

ostream& operator <<(ostream& a, Bike& b)
{
	cout << left << setw(10) << "Company" << setw(10) << "Color" << setw(10) << "Wheels" << setw(7) << "Power" << setw(8) << "Type" << setw(8) << "Height" << setw(12) << "Self-Start" << "Disc-brake" << endl;
	cout << "----------------------------------------------------------------------------";
	cout << left << setw(10) << b.company << setw(10) << b.color << setw(10) << b.noOfWheels << setw(7) << b.power << setw(8) << b.type << setw(8) << b.height << setw(12) << b.selfStart << b.brake << endl;
	return a;
}

istream& operator>>(istream& a, Bike& b)
{
	char name[10];
	cout << "Enter Company name: ";
	a >> name;
	b.company = name;
	char name1[10];
	cout << "Enter Color: ";
	a >> name1;
	b.color = name1;
	cout << "Enter number of wheels: ";
	a >> b.noOfWheels;
	cout << "Enter power: ";
	a >> b.power;
	char name2[10];
	cout << "Enter type: ";
	a >> name2;
	b.type = name2;
	cout << "Enter height: ";
	a >> b.height;
	cout << "Enter 1 for Self-Start or 0 for not: ";
	a >> b.selfStart;
	while (b.selfStart != 0 || b.selfStart != 1)
	{
		cout << "You entered invlid input.Enter again: ";
		a >> b.selfStart;
	}
	cout << "Enter 1 for Disc-Brake or 0 for not: ";
	a >> b.brake;
	while (b.brake != 0 || b.brake != 1)
	{
		cout << "You entered invlid input.Enter again: ";
		a >> b.brake;
	}
	return a;
}