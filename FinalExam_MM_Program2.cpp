// Michael Martin
// Final Exam - Program 2

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void loadArray(double rainfall[]);
void getTotalAvg(double rainfall[]);
void getMax(double rainfall[]);
void getMin(double rainfall[]);
void displayLine();
int monthErr(int);

int main() {

	// initialize array
	double rainfall[12] = {0.0};

	// display user instructions
	cout << "Enter a positive number representing the amount of rainfall in" << endl;
	cout << "inches for a given month and the program will calculate and" << endl;
	cout << "display the total, average, high, and low for the year." << endl << endl;

	// invoke loadArray function
	loadArray(rainfall);

	// invoke and display results functions
	displayLine();
	getTotalAvg(rainfall);
	getMax(rainfall);
	getMin(rainfall);
	cout << endl;

	return 0;
}

// function allows user to load the array with 12 numbers
void loadArray(double rainfall[]) 
{
	for (int i = 0; i < 12; i++) 
	{
		cout << "Enter rainfall for month #" << i + 1 << ": ";
		cin >> rainfall[i];
		while (rainfall[i] < 0)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Error. Please enter a positive integer: ";
			cin >> rainfall[i];
		}
	}
}

// function displays both total and average of given rainfalls
void getTotalAvg(double rainfall[]) 
{
	double total = 0.0;
	double avg = 0.0;
	for (int i = 0; i < 12; i++) 
	{
		total += rainfall[i];
	}
	avg = total / 12;
	cout << endl;
	cout << "Total rainfall: " << total << endl;
	cout << "Average rainfall: " << avg << endl;
}

// function displays max of given rainfalls
void getMax(double rainfall[]) {
	double max = 0.0;
	for (int i = 0; i < 12; i++) 
	{
		if (rainfall[i] > max)
		{
			max = rainfall[i];
		}
	}
	cout << "Max rainfall: " << max << endl;
}

// function displays min of given rainfalls
void getMin(double rainfall[]) {
	double min = rainfall[0];
	for (int i = 0; i < 12; i++)
	{
		if (rainfall[i] < min)
		{
			min = rainfall[i];
		}
	}
	cout << "Min rainfall: " << min << endl;
}

// function displays line to separate results
void displayLine() {
	cout << "--------------------" << endl;
}