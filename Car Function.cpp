#include "Vehicle.h"
#include "Car.h"

int Car::noOfCars = 0;

Car::Car()
{
	noOfDoors = 0;
	transmission = NULL;
	noOfSeats = 0;
}

Car::Car(char* company, char* color, int wheels, int power, char* type, int doors, char* transmission, int seats) :Vehicle(company, color, wheels, power, type)
{
	noOfDoors = doors;
	int size = strlen(transmission);
	this->transmission = new char[size + 1];
	this->transmission = transmission;
	noOfSeats = seats;
	noOfCars++;
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
	temp.noOfSeats = obj.noOfSeats;
	temp.transmission = obj.transmission;
	return temp;
}

Car::Car(const Car& obj)
{
	Car temp;
	temp.company = obj.company;
	temp.color = obj.color;
	temp.type = obj.type;
	temp.noOfWheels = obj.noOfWheels;
	temp.power = obj.power;
	temp.noOfDoors = obj.noOfDoors;
	temp.noOfSeats = obj.noOfSeats;
	temp.transmission = obj.transmission;
	noOfCars++;
}

void Car::setNoOfDoors(int door)
{
	noOfDoors = door;
}

void Car::settransmission(char* transmission)
{
	int size = strlen(transmission);
	this->transmission = new char[size + 1];
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

void Car::checkType()
{
	int wheels;
	cout << "Enter wheels: ";
	cin >> wheels;
	char type[3] = { 'C','a','r' };
	char* type_check = new char[3];
	type_check = type;
	if (wheels == 4)
	{
		setType(type_check);
	}
}

void Car::display()
{
	cout << left << setw(10) << "Company" << setw(10) << "Color" << setw(10) << "Wheels" << setw(7) << "Power" << setw(7) << "Type" << setw(15) << "No of doors" << setw(17) << "Transmission" << "No of seats" << endl;
	cout << "-------------------------------------------------------------------------------------------";
	cout << left << setw(10) << company << setw(10) << color << setw(10) << noOfWheels << setw(7) << power << setw(7) << type << setw(15) << noOfDoors << setw(13) << transmission << noOfSeats << endl;
}

Car::~Car()
{
	delete[] transmission;
}

ostream& operator<<(ostream& a, Car& b)
{
	a << left << setw(10) << "Company" << setw(10) << "Color" << setw(10) << "Wheels" << setw(7) << "Power" << setw(7) << "Type" << setw(15) << "No of doors" << setw(17) << "Transmission" << "No of seats" << endl;
	a << "-------------------------------------------------------------------------------------------";
	a << left << setw(10) << b.company << setw(10) << b.color << setw(10) << b.noOfWheels << setw(7) << b.power << setw(7) << b.type << setw(15) << b.noOfDoors << setw(13) << b.transmission << b.noOfSeats << endl;
	return a;
}

istream& operator>>(istream& a, Car& b)
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
	cout << "Enter number of doors: ";
	a >> b.noOfDoors;
	cout << "Enter transmission(A for automatic and M for manual): ";
	a >> b.gettransmission();
	cout << "Enter number of seats: ";
	a >> b.noOfSeats;
	return a;
}