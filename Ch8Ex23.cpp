// Ch8Ex23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// declaring variables
	double payroll = 0.0;
	double payrollStore = 0.0;
	char continueFlag = 'y';
	int counter = 0;

	// adds payroll for each store as many times as needed
	while (tolower(continueFlag) != 'n')
	{
		counter++;
		cout << " ----------" << endl;
		cout << "| Entry # " << counter << "|" << endl;
		cout << " ----------" << endl << endl;

		// the user can enter for 3 stores
		for (int i = 1; i <= 3; i++)
		{
			cout << "Store # " << i << endl;
			cout << "----------" << endl;
			cout << "Please enter payroll : $";

			// error handling to make sure input is an integer
			while (!(cin >> payroll)) 
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Error. Please enter a valid integer: ";
			}
			cout << endl;

			// Payroll running total
			payrollStore += payroll;
		}

		// Dispay running total of payroll
		cout << "-----------------------------------" << endl << endl;
		cout << "Total payroll: $" << fixed << setprecision(2) << payrollStore << endl;
		cout << endl;

		// asking user if they want to repeat loop
		cout << "Enter another payroll amount? (y/n): ";
		cin >> continueFlag;

		// error handling to insure user entered Y, y, N, or n
		while (tolower(continueFlag) != 'n' && tolower(continueFlag) != 'y')
		{
			cout << "Error. Please enter a valid character (y/n): ";
			cin >> continueFlag;
		}
		cout << endl;
	}

	return 0;
}