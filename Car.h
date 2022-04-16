#include "Vehicle.h"

class Car :public Vehicle
{
	int noOfDoors;
	char* transmission;
	int noOfSeats;
	static int noOfCars;

public:

	Car();

	Car(char* company, char* color, int wheels, int power, char* type, int doors, char* transmission, int seats);

	Car(const Car& obj);

	void setNoOfDoors(int door);

	void settransmission(char* transmission);

	void setNoOfSeats(int seat);

	int getNoOfDoors();

	char* gettransmission();

	int getNoOfSeats();

	void checkType();

	Car operator =(const Car& obj);

	void display();

	friend ostream& operator <<(ostream& a, Car& b);

	friend istream& operator >>(istream& a, Car& b);

	~Car();
};