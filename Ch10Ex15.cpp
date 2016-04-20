// Author - Michael Martin
// Date - 4-19-16
// Chapter 10 - Exercise 15: Multiplication table

#include "stdafx.h"
#include <iostream>
using namespace std;

void displayTable(int, int);
void displayLine();

int main()
{
	{
		int multiplicand = 0;
		int product = 0;

		while (multiplicand >= 0) 
		{
			cout << "Multiplicand (enter negative number to end): ";
			cin >> multiplicand;
			if (multiplicand < 0) 
			{
				break;
			}
			cout << endl;

			displayTable(multiplicand, product);

			cout << endl;
			displayLine();

		}

		cout << endl;
	}

	return 0;
}

void displayLine()
{
	cout << "----------------------" << endl << endl;
}

void displayTable(int multiplicand, int product)
{
	for (int multiplier = 1; multiplier < 10; multiplier++)
	{
		product = multiplicand * multiplier;
		cout << multiplicand << " * " << multiplier << " = " << product << endl;
	} // end for

}