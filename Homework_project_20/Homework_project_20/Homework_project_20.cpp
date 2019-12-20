//*********************************************************************** 
 //																		*
 //		Assingment:		#20												*
 //																		*
 //		File:			Homework_project_20.cpp							*
 //																		*
 //		Due Date:		Dec 09 2019										*
 //																		*
 //		Author:			Urban Shocker									*
 //																		*
 //		Course Name:	Programming I									*
 //																		*
 //		Course Number:	COSC 1550										*
 //																		*
 //		Description:	This program									*
 //																		*
 //																		*
 //***********************************************************************
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int TESTNUM = 4;

//prototype

double getTests(double[], int);
double toTotalTest(double[], int);
double getAverage(double[], int);
double getHighest(double[], int);
double getLowest(double[], int);
void report(double[], int);

int main()
{
	
	double tests[TESTNUM];
	report(tests, TESTNUM);
}
//****************************************************************
//gets the input form the user
double getTests(double tests[], int size)
{
	
	for (int i = 0; i < size; i++)
	{
		cout << "Please enter the score for test number " << i+1 << endl;
		cin >> tests[i];
	}
	return tests[TESTNUM];
}
//****************************************************************
//gets the total scores of all tests
double toTotalTest(double tests[],int size)
{
	double total = 0;
	for (int i = 0; i < size; i++)
	{
		total += tests[i];
	}
	return total;
}
//****************************************************************
//gets average of all tests
double getAverage(double tests[], int size)
{
	double total = 0;
	for (int i = 0; i < size; i++)
	{
		total += tests[i];
	}
	return total / size;
}
//****************************************************************
//gets the highest test score
double getHighest(double tests[], int size)
{
	double highest = 0;
	for (int i = 0; i < size; i++)
	{
		if (tests[i] > highest)
		{
			highest = tests[i];
		}
	}
	return highest;
}
//****************************************************************
//gets the lowest test score
double getLowest(double tests[], int size)
{
	double lowest = 0;
	lowest = tests[0];
	for (int i = 0; i < size; i++)
	{
		if (tests[i] < lowest)
		{
			lowest = tests[i];
		}
	}
	return lowest;
}
//****************************************************************
//reports the vlaues back to the user after calculations
void report(double tests[], int size)
{
	cout << fixed << setprecision(2);
	getTests(tests, size);
	cout <<"The total is: " << toTotalTest(tests, size) << endl;
	cout << "Please Enter to Continue";
	cin.ignore();
	cin.get();
	cout <<"The average test score is: " << getAverage(tests, size) << endl;
	cout << "Please Enter to Continue";
	cin.get();
	cout <<"The Highest Score is: " << getHighest(tests, size) << endl;
	cout << "Please Enter to Continue";
	cin.get();
	cout <<"The Lowest test score is: " << getLowest(tests, size) << endl;
	cout << "Please Enter to Continue";
	cin.get();
}

/*
Please enter the score for test number 1
70
Please enter the score for test number 2
80
Please enter the score for test number 3
90
Please enter the score for test number 4
75
The total is: 315.00
Please Enter to Continue
The average test score is: 78.75
Please Enter to Continue
The Highest Score is: 90.00
Please Enter to Continue
The Lowest test score is: 70.00
Please Enter to Continue
*/