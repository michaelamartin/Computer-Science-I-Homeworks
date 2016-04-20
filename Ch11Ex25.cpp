// Michael Martin
// Chapter 11 - Exercise 25
// 4-20-16

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int monthErr(int);
char contFlagErr(char);
void dispMonthDay(int, int[]);

int main() {
	int month = 0;
	int arrayMonths[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	char continueFlag = ' ';

	cout << "Enter in an integer (1-12) representing a month and the" << endl;
	cout << "program will display the number of days in the given month." << endl;

	do
	{
		cout << endl << "Enter in a month (1-12): ";
		// error handling to make sure input is an integer
		cin >> month;
		month = monthErr(month);
		dispMonthDay(month, arrayMonths);

		cout << "Enter another month? (y/n): ";
		cin >> continueFlag;
		continueFlag = contFlagErr(continueFlag);
	} while (continueFlag == 'y');

	return 0;
}

int monthErr(int month)
{
	while (month < 1 || month > 12)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Error: Please enter a whole number between 1 and 12: ";
		cin >> month;
	}
	return month;
}

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

void dispMonthDay(int month, int arrayMonths[])
{
	string strMonth = " ";

	switch (month) {
	case 1:
		strMonth = "January";
		break;
	case 2:
		strMonth = "February";
		break;
	case 3:
		strMonth = "March";
		break;
	case 4:
		strMonth = "April";
		break;
	case 5:
		strMonth = "May";
		break;
	case 6:
		strMonth = "June";
		break;
	case 7:
		strMonth = "July";
		break;
	case 8:
		strMonth = "August";
		break;
	case 9:
		strMonth = "September";
		break;
	case 10:
		strMonth = "October";
		break;
	case 11:
		strMonth = "November";
		break;
	case 12:
		strMonth = "December";
		break;
	default:
		break;
	}

	cout << "There are " << arrayMonths[month - 1] << " days in " << strMonth << "." << endl;
	cout << "-----------------------------" << endl << endl;

}


