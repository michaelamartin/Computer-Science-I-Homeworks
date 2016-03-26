// Intermediate13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declaring variables and constants
	double currentReading = 0.0;
	double previousReading = 0.0;
	const double WATER_RATE = 0.007;
	double waterUsed = 0.0;
	double waterBill = 0.0;

	//enter current and previous meter readings
	cout << "Enter the customer's current meter reading (gallons): ";
	cin >> currentReading;
	cout << "Enter the customer's previous meter reading (gallons): ";
	cin >> previousReading;

	//calculating the water bill
	waterUsed = currentReading - previousReading;
	waterBill = (waterUsed)*WATER_RATE;

	//if bill minimum charge if threshold is not surpassed
	if (waterBill < 16.67)
	{
		waterBill = 16.67;
	}

	//display water used and water bill
	cout << endl << "The customer's water usage (gallons): "<< waterUsed << endl;
	cout << "The customer's water bill: $";
	cout << fixed << setprecision(2);
	cout << waterBill << endl << endl;

	system("pause");
		
    return 0;
}

