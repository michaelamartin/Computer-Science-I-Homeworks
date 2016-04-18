// Ch9Ex23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

// declaring variables
double score1 = 0.0;
double score2 = 0.0;
double score3 = 0.0;
double avg = 0.0;

// function prototypes
double getTestScore();
double calcAverage(double, double, double);

int main()
{
	score1 = getTestScore();
	score2 = getTestScore();
	score3 = getTestScore();
	avg = calcAverage(score1, score2, score3);

	// displaying test scores and average test score
	cout << "Test scores: " << fixed << setprecision(1) << score1 << ", " 
		<< score2 << ", " << score3 << endl;
	cout << "Average test score: " << fixed << setprecision(1) << avg << endl;
	return 0;
}

// function definitions
double getTestScore()
{
	double score = 0.0;
	cout << "Enter a test score: ";
	while (!(cin >> score))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Error. Please enter a valid integer: ";
	}
	return score;
}

double calcAverage(double score1, double score2, double score3)
{
	return (score1 + score2 + score3) / 3;
}