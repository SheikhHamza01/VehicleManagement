#include "Vehicle.h"
#include "Truck.h"

int Truck::noOfTrucks = 0;

Truck::Truck()
{
	containerSize = 0;
	category = NULL;
	fourWheelDrive = true;
}

Truck::Truck(char* company, char* color, int wheels, int power, char* type, double containerSize, char* category, bool fourWheelDrive) :Vehicle(company, color, wheels, power, type)
{
	this->containerSize = containerSize;
	int size = strlen(category);
	this->category = new char[size + 1];
	this->category = category;
	this->fourWheelDrive = fourWheelDrive;
	noOfTrucks++;
}

Truck::Truck(char* company, char* color, int wheels, int power, char* type, const Truck& obj) :Vehicle(company, color, wheels, power, type)
{
	this->containerSize = containerSize;
	this->category = category;
	this->fourWheelDrive = fourWheelDrive;
	noOfTrucks++;
}

void Truck::setContainerSize(double size)
{
	containerSize = size;
}

void Truck::setCategory(char* category)
{
	int size = strlen(category);
	this->category = new char[size + 1];
	this->category = category;
}

void Truck::setFourWheelDrive(bool fourWheelDrive)
{
	this->fourWheelDrive = fourWheelDrive;
}

double Truck::getContainerSize()
{
	return containerSize;
}

char* Truck::getCategory()
{
	return category;
}

bool Truck::getFourWheelDrive()
{
	return fourWheelDrive;
}

void Truck::checkType()
{
	int wheels;
	cout << "Enter wheels: ";
	cin >> wheels;
	char type[5] = { 'T','r','u','c','k' };
	char* type_check = new char[5];
	type_check = type;
	if (wheels >= 6 && wheels <= 26)
	{
		setType(type_check);
	}
}
void Truck::display()
{
	cout << left << setw(10) << "Company" << setw(10) << "Color" << setw(10) << "Wheels" << setw(7) << "Power" << setw(7) << "Type" << setw(15) << "Container Size" << setw(10) << "Category" << "Four wheel drive" << endl;
	cout << "----------------------------------------------------------------------------------------";
	cout << left << setw(10) << company << setw(10) << color << setw(10) << noOfWheels << setw(7) << power << setw(7) << type << setw(15) << containerSize << setw(10) << category << fourWheelDrive << endl;
}
Truck Truck::operator=(const Truck& obj)
{
	Truck temp;
	temp.company = obj.company;
	temp.color = obj.color;
	temp.type = obj.type;
	temp.noOfWheels = obj.noOfWheels;
	temp.power = obj.power;
	temp.containerSize = obj.containerSize;
	temp.category = obj.category;
	temp.fourWheelDrive = obj.fourWheelDrive;
	return temp;
}

Truck::~Truck()
{
	delete[] category;
}

ostream& operator<<(ostream& a, Truck& b)
{
	a << left << setw(10) << "Company" << setw(10) << "Color" << setw(10) << "Wheels" << setw(7) << "Power" << setw(7) << "Type" << setw(15) << "Container Size" << setw(10) << "Category" << "Four wheel drive" << endl;
	a << "----------------------------------------------------------------------------------------";
	a << left << setw(10) << b.company << setw(10) << b.color << setw(10) << b.noOfWheels << setw(7) << b.power << setw(7) << b.type << setw(15) << b.containerSize << setw(10) << b.category << b.fourWheelDrive << endl;
	return a;
}

istream& operator>>(istream& a, Truck& b)
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
	cout << "Enter container size: ";
	a >> b.containerSize;
	cout << "Enter Category: ";
	a >> b.category;
	cout << "Enter 1 for Four wheel drive or 0 for not: ";
	a >> b.fourWheelDrive;
	return a;
}
