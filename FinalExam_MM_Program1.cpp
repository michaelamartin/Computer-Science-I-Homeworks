// Michael Martin
// Final Exam Program 1

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

double calcFare(double);
double milesErr(double);
char contFlagErr(char);

// initialize variables
double miles = 0.0;
char continueFlag = 'y';
int counter = 0;
double fare = 0.0;
double totalFare = 0.0;


int main()
{
	while (continueFlag == 'y')
	{
		// counter keeps track of the user's trips
		counter++;

		// user may input length of trip
		cout << "Enter in the length of trip #" << counter << " in miles: ";
		cin >> miles;
		miles = milesErr(miles);
		fare = calcFare(miles);
		cout << "Trip #" << counter << " fare: $" << fixed 
			<< setprecision(2) << fare << endl;

		// allow user to enter multiple trips or end loop
		cout << "Add another trip? (y/n): ";
		cin >> continueFlag;
		continueFlag = contFlagErr(continueFlag);
		cout << endl;

		// total fare is accumulated throughout the loop
		totalFare += fare;
	}

	// separate output
	cout << "-------------------------" << endl;

	// display total fare
	cout << "Total fare: $" << fixed << setprecision(2) << totalFare 
		<< endl << endl;

    return 0;
}

// function that takes argument of miles and returns fare
double calcFare(double miles) 
{
	double fare = 2.50 + miles*1.85;
	return fare;
}

// function for error handling function miles input
double milesErr(double miles)
{
	while (miles <= 0)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Error.  Input must be a positive number.  Enter in the length of trip #" 
			<< counter << " : ";
		cin >> miles;
	}
	return miles;
}

// function for error handling continue flag
char contFlagErr(char continueFlag)
{
	while (continueFlag != 'y' && continueFlag != 'n')
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Error: Please enter 'y' or 'n': ";
		cin >> continueFlag;
	}
	return continueFlag;
}