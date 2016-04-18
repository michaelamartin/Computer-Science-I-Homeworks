// Author - Michael Martin
// Date - 4-17-16
// Chapter 10 - Exercise 15: Multiplication table

#include "stdafx.h"
#include <iostream>
using namespace std;

void multiTable();
void displayLine();

int main()
{
	multiTable();
	
	return 0;
}

void multiTable()
{
	int multiplicand = 0;
	int product = 0;

	cout << "Multiplicand (negative number to end): ";
	cin >> multiplicand;
	cout << endl;

	while (multiplicand >= 0)
	{
		for (int multiplier = 1; multiplier < 10; multiplier++)
		{
			product = multiplicand * multiplier;
			cout << multiplicand << " * " << multiplier << " = " << product << endl;
		} // end for

		cout << endl;
		displayLine();
		cout << "Multiplicand (enter negative number to end): ";
		cin >> multiplicand;
		cout << endl;

	} // end while

	cout << endl;
}

void displayLine()
{
	cout << "----------------------" << endl << endl;
}