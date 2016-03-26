// Ch4_Ex12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//delcare constants
	const int ORC_PRICE = 25;
	const int MF_PRICE = 30;
	const int BALC_PRICE = 15;

	//declare variables
	int orcTickets = 0;
	int mfTickets = 0;
	int balcTickets = 0;
	int orcRev = 0;
	int mfRev = 0;
	int balcRev = 0;
	int totalRev = 0;

	//user is asked to input number of tickets sold
	cout << "Please enter the number of orchestra seat tickets sold: ";
	cin >> orcTickets;
	cout << "Please enter the number of main floor tickets sold: ";
	cin >> mfTickets;
	cout << "Please enter the number of balcony seats tickets sold: ";
	cin >> balcTickets;
	cout << endl;

	//revenue for each ticket type is calculated, as well as total revenue
	orcRev = orcTickets*ORC_PRICE;
	mfRev = mfTickets*MF_PRICE;
	balcRev = balcTickets*BALC_PRICE;
	totalRev = orcRev + mfRev + balcRev;

	//revenue for each ticket type and total revenue are displayed
	cout << "Revenue generated by orchestra ticket sales: $" << orcRev << endl;
	cout << "Revenue generated by main floor ticket sales: $" << mfRev << endl;
	cout << "Revenue generated by balcony ticket sales: $" << balcRev << endl << endl;
	cout << "Total revenue generated: $" << totalRev << endl << endl;

	system("pause");

	return 0;
}

