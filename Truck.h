#include "Vehicle.h"

class Truck :public Vehicle
{
	double containerSize;
	char* category;
	bool fourWheelDrive;
	static int noOfTrucks;

public:

	Truck();

	Truck(char* company, char* color, int wheels, int power, char* type, double containerSize, char* category, bool fourWheelDrive);

	Truck(char* company, char* color, int wheels, int power, char* type, const Truck& obj);

	void setContainerSize(double size);

	void setCategory(char* category);

	void setFourWheelDrive(bool fourWheelDrive);

	double getContainerSize();

	char* getCategory();

	bool getFourWheelDrive();

	void checkType();

	Truck operator =(const Truck& obj);

	void display();

	friend ostream& operator <<(ostream& a, Truck& b);

	friend istream& operator >>(istream& a, Truck& b);

	~Truck();
};
