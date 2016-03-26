// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	// declare input/output variables

	int credits = 0;
	int tuitionRate = 0;
	int parkingCost = 0;
	double tuition = 0.0;
	char resCode = ' ';
	char parking = ' ';

	// ask user for input

	cout << "Please enter the number of credit hours: ";
	cin >> credits;

	cout << "Is the student a county resident (C), state" << endl;
	cout << "resident (S), or out-of-state resident (O)?" << endl;
	cout << "Please enter one of the given residency codes: ";
	cin >> resCode;
	resCode = toupper(resCode);

	// residence code switch -- takes cases C, S, or O

	switch (resCode)
	{
	case 'C':
		tuitionRate = 100;
		break;
	case 'S':
		tuitionRate = 150;
		break;
	case 'O':
		tuitionRate = 300;
		break;
	default:
		cout << "Error: Invalid residency code." << endl;
		exit(0);
	}

	// asking user for input regarding parking

	cout << "Does the student require a parking permit? (y/n): ";
	cin >> parking;
	parking = toupper(parking);

	// y/n switch -- sets parkingCost to 50 if y, remains 0 if no

	switch (parking)
	{
	case 'Y':
		parkingCost = 50;
		break;
	case 'N':
		break;
	default:
		cout << "Error: Invalid entry." << endl;
		exit(0);
	}

	// display outputs

	tuition = tuitionRate*credits + parkingCost;
	cout << "Total tuition fee: $" << fixed << setprecision(2);
	cout << tuition << endl << endl;

    return 0;
}