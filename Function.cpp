#include "Class.h"

Vehicle::Vehicle()
{
	company = NULL;
	color = NULL;
	noOfWheels = 0;
	power = 0;
	type = NULL;
}

Vehicle::Vehicle(char* company,char* color,int wheels,int power,char* type)
{
	this->company = company;
	this->color = color;
	this->noOfWheels = wheels;
	this->power = power;
	this->type = type;
}

Vehicle::Vehicle(const Vehicle& obj)
{
	for (int i = 0; company[i]!='\0'; i++)
	{
		company[i] = obj.company[i];
	}
	for (int i = 0; color[i] != '\0'; i++)
	{
		color[i] = obj.color[i];
	}
	noOfWheels = obj.noOfWheels;
	power = obj.power;
	for (int i = 0; type[i] != '\0'; i++)
	{
		type[i] = obj.type[i];
	}
}

void Vehicle::setCompany(char* ptr)
{
	company = ptr;
}

void Vehicle::setcolor(char* ptr)
{
	color = ptr;
	
}

void Vehicle:: setNoOfWheels(int a)
{
	noOfWheels = a;
}

void Vehicle::setPower(int a)
{
	power = a;
}

void Vehicle::setType(char* ptr)
{
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



Car Car::operator=(const Car& obj)
{
	Car temp;
	temp.company = obj.company;
	temp.color = obj.color;
	temp.type = obj.type;
	temp.noOfWheels = obj.noOfWheels;
	temp.power = obj.power;
	temp.noOfDoors = obj.noOfDoors;
	temp.transmission = obj.transmission;
	temp.noOfSeats = obj.noOfSeats;
	return temp;
}

Car::Car()
{
	noOfDoors = 0;
	noOfSeats = 0;
	noOfCars = 0;
	transmission = NULL;
}

Car::Car(int doors,int size, int seats)
{
	noOfDoors = doors;
	noOfSeats = seats;
	transmission = new char[size];
	noOfCars++;
}

Car::Car(const Car& obj)
{
	noOfDoors = obj.noOfDoors;
	noOfSeats = obj.noOfSeats;
	transmission = obj.transmission;
}

void Car::setNoOfDoors(int door)
{
	noOfDoors = door;
}

void Car::settransmission(char* transmission)
{
	this->transmission = transmission;
}

void Car::setNoOfSeats(int seat)
{
	noOfSeats = seat;
}

int Car::getNoOfDoors()
{
	return noOfDoors;
}

char* Car::gettransmission()
{
	return transmission;
}

int Car::getNoOfSeats()
{
	return noOfSeats;
}

Car::~Car()
{
	delete[] transmission;
}

int Car::noOfCars = 0;



Bike::Bike()
{
	height = 0;
	selfStart = true;
	brake = true;
	noOfBikes = 0;
}

Bike::Bike(double height, bool start, bool brake)
{
	this->height = height;
	selfStart = start;
	this->brake = brake;
	noOfBikes++;
}

Bike::Bike(const Bike& obj)
{
	height = obj.height;
	selfStart = obj.selfStart;
	brake = obj.brake;
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

int Bike::noOfBikes = 0;



Truck::Truck()
{
	containerSize = 0.0;
	fourWheelDrive = true;
	category = NULL;
	noOfTrucks = 0;
}

Truck::Truck(double containerSize, int size, bool fourWheelDrive)
{
	this->containerSize = containerSize;
	category = new char[size];
	this->fourWheelDrive = fourWheelDrive;
	noOfTrucks++;
}

Truck::Truck(const Truck& obj)
{
	containerSize = obj.containerSize;
	category = obj.category;
	fourWheelDrive = obj.fourWheelDrive;
}

void Truck::setContainerSize(double size)
{
	containerSize = size;
}

void Truck::setCategory(char* category)
{
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

Truck Truck::operator =(const Truck& obj)
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

int Truck::noOfTrucks = 0;



istream& operator >>(istream& a, Bike& b)
{
	cout << "Enter Company name: ";
	a >> b.company;
	cout << "Enter Color: ";
	a >> b.color;
	cout << "Enter number of wheels: ";
	a >> b.noOfWheels;
	cout << "Enter power: ";
	a >> b.power;
	cout << "Enter type: ";
	a >> b.type;
	cout << "Enter height: ";
	a >> b.height;
	cout << "Enter 1 for Self-start or 0 for not: ";
	a >> b.selfStart;
	while (b.selfStart != 0 || b.selfStart != 1)
	{
		cout << "You entered invlid input.Enter again: ";
		a >> b.selfStart;
	}
	cout << "Enter 1 for Disc-brake or 0 for not: ";
	a >> b.brake;
	while (b.brake != 0 || b.brake != 1)
	{
		cout << "You entered invlid input.Enter again: ";
		a >> b.brake;
	}
	return a;
}

istream& operator >>(istream& a, Truck& b)
{
	cout << "Enter Company name: ";
	a >> b.company;
	cout << "Enter Color: ";
	a >> b.color;
	cout << "Enter number of wheels: ";
	a >> b.noOfWheels;
	cout << "Enter power: ";
	a >> b.power;
	cout << "Enter type: ";
	a >> b.type;
	cout << "Enter the size of container: ";
	a >> b.containerSize;
	cout << "Enter category: ";
	a >> b.category;
	cout << "Enter 1 for Four wheel drive or 0 for not: ";
	a >> b.fourWheelDrive;
	while (b.fourWheelDrive != 0 || b.fourWheelDrive != 1)
	{
		cout << "You entered invlid input.Enter again: ";
		a >> b.fourWheelDrive;
	}
	return a;
}

istream& operator>>(istream& a, Car& b)
{
	cout << "Enter Company name: ";
	a >> b.company;
	cout << "Enter Color: ";
	a >> b.color;
	cout << "Enter number of wheels: ";
	a >> b.noOfWheels;
	cout << "Enter power: ";
	a >> b.power;
	cout << "Enter type: ";
	a >> b.type;
	cout << "Enter number of doors: ";
	a >> b.noOfDoors;
	cout << "Enter transmission(A for automatic and M for manual): ";
	a >> b.transmission;
	cout << "Enter number of seats: ";
	a >> b.noOfSeats;
	return a;
}

ostream& operator <<(ostream& a, Bike& b)
{
	cout << left << setw(10) << "Company" << setw(10) << "Color" << setw(10) << "Wheels" << setw(7) << "Power" << setw(8) << "Type" << setw(8) << "Height" << setw(12) << "Self-Start" << "Disc-brake" << endl;
	cout << "----------------------------------------------------------------------------"; cout << left << setw(10) << b.company << setw(10) << b.color << setw(10) << b.noOfWheels << setw(7) << b.power << setw(8)<< b.type << setw(8) << b.height << setw(12) << b.selfStart << b.brake << endl;
	return a;
}

ostream& operator <<(ostream& a, Truck& b)
{
	cout << left << setw(10) << "Company" << setw(10) << "Color" << setw(10) << "Wheels" << setw(7) << "Power" << setw(7) << "Type" << setw(15) << "Container Size" << setw(10) << "Category" << "Four wheel drive" << endl;
	cout << "----------------------------------------------------------------------------------------";
	cout << left << setw(10) << b.company << setw(10) << b.color << setw(10) << b.noOfWheels << setw(7) << b.power << setw(7) << b.type << setw(15) << b.containerSize << setw(10) << b.category << b.fourWheelDrive << endl;
	return a;
}

ostream& operator<<(ostream& a, Car& b)
{
	cout << left << setw(10) << "Company" << setw(10) << "Color" << setw(10) << "Wheels" << setw(7) << "Power" << setw(7) << "Type" << setw(15) << "No of doors" << setw(17) << "Transmission" << "No of seats" << endl;
	cout << "-------------------------------------------------------------------------------------------";
	cout << left << setw(10) << b.company << setw(10) << b.color << setw(10) << b.noOfWheels << setw(7) << b.power << setw(7) << b.type << setw(15) << b.noOfDoors << setw(13) << b.transmission << b.noOfSeats << endl;
	return a;
}


