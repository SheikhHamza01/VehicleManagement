#include "Vehicle.h"

class Bike :public Vehicle
{
	double height;
	bool selfStart;
	bool brake;
	static int noOfBikes;

public:

	Bike();

	Bike(char* company, char* color, int wheels, int power, char* type, double height, bool start, bool brake);

	Bike(char* company, char* color, int wheels, int power, char* type, const Bike& obj);

	void setHeight(double height);

	void setstart(bool start);

	void setbrake(bool brake);

	double setHeight();

	bool getstart();

	bool getbrake();

	void checkType();

	Bike operator=(const Bike& obj);

	friend ostream& operator <<(ostream& a, Bike& b);

	friend istream& operator >>(istream& a, Bike& b);

	void display();

	~Bike();
};
