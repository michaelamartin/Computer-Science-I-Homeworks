// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	// declaring input and output variables

	double carValue = 0.0;
	int driverAge = 0;
	char driverGender = ' ';
	double insuranceRate = 0.0;
	double insuranceCost = 0.0;

	// asking for user inputs 

	cout << "Please enter the value of the automobile: ";
	cin >> carValue;
	cout << "Please enter the age of the driver: ";
	cin >> driverAge;

	// checking data type and driver age
	if (cin.fail())
	{
		cout << "Please enter a valid integer." << endl;
		exit(0);
	}
	else if (driverAge < 16)
	{
		cout << "The driver must be older than 16.  Please enter a valid age (16-100)." << endl;
		exit(0);
	}
	else if (driverAge > 100)
	{
		cout << "That seems a little dangerous... Please enter a valid age (16-100)." << endl;
		exit(0);
	}

	// checking gender deciding rate

	cout << "Please enter the gender of the driver (M/F): ";
	cin >> driverGender;
	driverGender = toupper(driverGender);

	if (driverGender == 'M')
	{
		if (driverAge < 25)
		{
			insuranceRate = 0.10;
		}
		else
		{
			insuranceRate = 0.05;
		}
	}

	else if (driverGender == 'F')
	{
		if (driverAge < 25)
		{
			insuranceRate = 0.08;
		}
		else
		{
			insuranceRate = 0.05;
		}
	}

	else
	{
		cout << "Error. Please enter either M or F for gender." << endl;
		exit(0);
	}

	// displaying outputs

	insuranceCost = insuranceRate*carValue;
	cout << "Cost of insurance policy: $" << fixed << setprecision(2) << insuranceCost << endl << endl;
	return 0;
}
