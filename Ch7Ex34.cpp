// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	// Declaring variables
	int people = 0;
	int totalPeople = 0;
	double charge = 0.0;
	double totalCharge = 0.0;
	int counter = 0;

	// Priming repeat as Y to start loop
	char repeat = 'Y';

	// Additional registrants loop
	while (toupper(repeat) == 'Y')
	{
		counter += 1;

		cout << "Entry " << counter << endl;
		cout << "Please enter the number of registrants: ";
		cin >> people;

		// Selection structure determining charge per person

		if (people > 0 && people < 4)
		{
			charge = people * 150;
		}
		else if (people > 3 && people < 10)
		{
			charge = people * 100;
		}
		else if (people > 9)
		{
			charge = people * 90;
		}
		// Error handling
		else
		{
			cout << "Error: Please enter a positive integer" << endl;
			exit(0);
		}

		// Totaling up charge and people accross iterations
		totalCharge += charge;
		totalPeople += people;

		// Displaying registrants and charge per registrant on a per entry basis
		cout << "Charge per registrant: $" << fixed << setprecision(2)
			<< charge/people << endl;
		cout << "Total charge: $" << charge << endl << endl;


		//Running totals (only displayed after first entry)
		if (counter > 1)
		{
			cout << "Running Totals" << endl;
			cout << "Total registrants: " << totalPeople << endl;
			cout << "Total charge: $" << fixed << setprecision(2)
				<< totalCharge << endl;
			cout << "Average charge per registrant: $" << fixed << setprecision(2)
				<< totalCharge / totalPeople << endl;
		}

		// Asking user if they would like to enter more data
		cout << "Would you like to enter the registrants for another company? (y/n): ";
		cin >> repeat;
		cout << "---------------------------------------------------" << endl;

		// Error handling
		if (toupper(repeat) != 'Y' && toupper(repeat) != 'N')
		{
			cout << "Error. Please enter 'y' or 'n' when prompted." << endl;
			exit(0);
		}
	}

	// Displaying totals and averages
	cout << "End Totals" << endl;
	cout << "Total registrants: " << totalPeople << endl;
	cout << "Total charge: $" << fixed << setprecision(2)
		<< totalCharge << endl;
	cout << "Average charge per registrant: $" << fixed << setprecision(2)
		<< totalCharge / totalPeople << endl << endl;

	return 0;
}


