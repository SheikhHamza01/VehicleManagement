#include "Vehicle.h"
#include "Car.h"
#include "Bike.h"
#include "Truck.h"
#include"Bilal Motors.h"

void option(char choice, Bilal_Motors* bilalMotors);

int main()
{
	Bilal_Motors obj;
	char select = { '\0' };
	cout << "Select your required option\n ";
	cout << "S\tShow Vehicles list" << endl;
	cout << "A\tAdd new Bike" << endl;
	cout << "F\tFind Vehicle by Type" << endl;
	cout << "Q\tQuit Program" << endl;
	cin >> select;
	if (select == 'Q' || select == 'q')
	{
		exit(0);
	}
	else if (select == 'A' || select == 'a')
	{
		char in_choice;
		cout << "B for Bike\nC for Car\nT for Truck" << endl;
		cin >> in_choice;
		option(in_choice, &obj);
	}
	if (select == 'F' || select == 'f')
	{
		char type[6];
		cout << "Enter Type of Vehicle which you want to find : ";
		cin >> (type);
		char* type_name = type;

		obj.search_Vehicle(type_name);
	}
	return 0;
}
void option(char select, Bilal_Motors* bilalMotors)
{
	cin.ignore();
	char input[10] = { '0' };
	cout << "Enter name of Company : ";
	cin.getline(input, 10);
	int counter = 0;
	for (int i = 0; input[i] != 0; i++)
	{
		counter++;
	}
	char* companyname = new char[counter];
	companyname = input;
	char icolor[10];
	cout << "Enter color of Vehicle : ";
	cin.getline(icolor, 10);
	int Colorcounter = 0;
	for (int i = 0; icolor[i] != 0; i++)
		Colorcounter++;
	char* color = new char[Colorcounter];
	color = icolor;
	int wheels = 0;
	cout << "Enter number of wheels : ";
	cin >> wheels;
	int power = 0;
	cout << "Enter Power of Engine of Vehicle : ";
	cin >> power;
	cin.ignore();
	char userType[5] = { '0' };
	cout << "Enter Vehicle Type like \(Car\,Bike\,Truck\).";
	cin.getline(userType, 5);
	int typeCounter = 0;
	for (int i = 0; userType[i] != '\0'; i++)
	{
		typeCounter++;
	}
	char* type = new char[typeCounter];
	type = userType;
	if (select == 'B')
	{
		double Bheight;
		cout << "Enter height of bike : ";
		cin >> Bheight;

		bool selfStart = NULL;
		int choice;
		cout << "Enter if the bike is self start of not : \(0 for NO and 1 for Yes\)";
		cin >> choice;
		if (choice == 1)
		{
			selfStart = true;
		}
		else
		{
			selfStart == false;
		}
		choice = 0;
		bool disc_Brakes = NULL;
		cout << "Enter if the bike has disc brakes or not : \(0 for NO and 1 for Yes\)";
		cin >> choice;
		if (choice == 1)
		{
			disc_Brakes = true;
		}
		else
		{
			disc_Brakes = false;
		}
		Bike B(companyname, color, wheels, power, type, Bheight, selfStart, disc_Brakes);
		bilalMotors->addVehicle(&B);
	}
	else if (select == 'C')
	{
		int doors, seats;
		cout << "Enter No of doors of Cars : ";
		cin >> doors;
		cout << "Enter No of Seats of Cars : ";
		cin >> seats;
		cout << "Enter Trasmission : ";
		char trasmission_car[9] = { '0' };
		cin.getline(trasmission_car, 9);
		int trasmission_arr = 0;
		for (int i = 0; trasmission_car[i] != '0'; i++)
		{
			trasmission_arr++;
		}
		char* trasmission = new char[trasmission_arr];
		trasmission = trasmission_car;
		Car C(companyname, color, wheels, power, type, doors, trasmission, seats);
		bilalMotors->addVehicle(&C);
	}
	else if (select == 'T')
	{
		double containerSize;
		cout << "Enter the size of Container for Truck : ";
		cin >> containerSize;
		int choice = 0, counter = 0;
		bool fourWheelDrive;
		char Category[11] = { '0' };
		cout << "Enter Category of Truck like \(Double_Cabin or Single_Cabin\)";
		cin.getline(Category, 11);
		for (int i = 0; Category[i] != '0'; i++)
		{
			counter++;
		}
		char* category = new char[counter];
		category = Category;
		cout << "Enter either the Truck has Four Wheel Drive or not \(1 for Yes and 0 for No\)";
		cin >> choice;
		if (choice == 1)
		{
			fourWheelDrive = true;
		}
		else
		{
			fourWheelDrive = false;
		}
		Truck T(companyname, color, wheels, power, type, containerSize, category, fourWheelDrive);
		bilalMotors->addVehicle(&T);
	}


}