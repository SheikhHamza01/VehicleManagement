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

	Vehicle(char*, char*, int, int, char* type);

	Vehicle(const Vehicle& obj);

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

	friend ostream& operator <<(ostream& a, Vehicle& b);

	friend istream& operator >>(istream& a, Vehicle& b);

	~Vehicle();
};

class Car :public Vehicle
{
	int noOfDoors;
	char* transmission;
	int noOfSeats;
	static int noOfCars;

public:

	Car();

	Car(int doors,int size, int seats);

	Car(const Car& obj);

	void setNoOfDoors(int door);

	void settransmission(char* transmission);

	void setNoOfSeats(int seat);

	int getNoOfDoors();

	char* gettransmission();

	int getNoOfSeats();

	Car operator =(const Car& obj);

	friend ostream& operator <<(ostream& a,Car& b);

	friend istream& operator >>(istream& a, Car& b);

	~Car();
};

class Bike :public Vehicle
{
	double height;
	bool selfStart; 
	bool brake;
	static int noOfBikes;

public:

	Bike();

	Bike(double height, bool start, bool brake);

	Bike(const Bike& obj);

	void setHeight(double height);

	void setstart(bool start);

	void setbrake(bool brake);

	double setHeight();

	bool getstart();

	bool getbrake();

	Bike operator=(const Bike& obj);

	friend ostream& operator <<(ostream& a, Bike& b);

	friend istream& operator >>(istream& a, Bike& b);

	~Bike();
};

class Truck :public Vehicle
{
	double containerSize;
	char* category;
	bool fourWheelDrive;
	static int noOfTrucks;

public:

	Truck();

	Truck(double containerSize,int size, bool fourWheelDrive);

	Truck(const Truck& obj);

	void setContainerSize(double size);

	void setCategory(char* category);

	void setFourWheelDrive(bool fourWheelDrive);

	double getContainerSize();

	char* getCategory();

	bool getFourWheelDrive();

	Truck operator =(const Truck& obj);

	friend ostream& operator <<(ostream& a, Truck& b);

	friend istream& operator >>(istream& a, Truck& b);

	~Truck();
};

