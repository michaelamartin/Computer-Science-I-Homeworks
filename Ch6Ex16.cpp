// Intermediate16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	// Declaring input and output variables
	int num1 = 0;
	int num2 = 0;
	char operation = ' ';
	double result = 0;
	char again = 'y';

	// Initial description of program
	cout << "This program will perform addition, subtratction, multiplication," << endl;
	cout << "or divison based on two given inputs and the chosen operator." << endl << endl;
	cout << "The operator must be entered as one of the following characters:" << endl;
	cout << "A - addition" << endl << "S - subtraction" << endl << "M - multiplication";
	cout << endl << "D - division" << endl << endl;
	
	// While loop allows user to perform multiple iterations of calculations
	while (again == 'y')
	{
		// Inputs
		cout << "Please enter a character for the type of operation: ";
		cin >> operation;
		// Acccepting lowercase and uppercase characters
		operation = toupper(operation);
		if (operation != 'A' && operation != 'S' && operation != 'M' && operation != 'D')
		{
			cout << "The value entered is not one of the accepted characters." << endl;
			cout << "Please try again." << endl << endl;
			exit(0);
		}
		cout << "Please enter the first integer: ";
		cin >> num1;
		if (cin.fail())
		{
			cout << "The value entered is not an integer.  Please try again." << endl << endl;
			exit(0);
		}
		cout << "Please enter the second integer: ";
		cin >> num2;
		if (cin.fail())
		{
			cout << "The value entered is not an integer.  Please try again." << endl << endl;
			exit(0);
		}

			// Calculations
			switch (operation)
			{
			case 'A':
				result = num1 + num2;
				break;
			case 'S':
				if (num1 >= num2)
				{
					result = num1 - num2;
					break;
				}
				else
				{
					result = num2 - num1;
					break;
				}
			case 'M':
				result = num1 * num2;
				break;
			case 'D':
				if (num1 >= num2)
				{
					result = static_cast<double>(num1) / num2;
					break;
				}
				else
				{
					result = static_cast<double>(num2) / num1;
					break;
				}
			default:
				cout << "Error. Try again." << endl << endl;
				exit(0);
			}

		// Returned results (loop conitinues while again = y)
		cout << "Result: " << result << endl << endl;
		cout << "Would you like to perform another calculation? (y/n): ";
		cin >> again;
		cout << endl << "------------------------------------------------------------" << endl << endl;
	}
	return 0;
}

