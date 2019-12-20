//*********************************************************************** 
 //																		*
 //		Assingment:		#21												*
 //																		*
 //		File:			Homework_project_21.cpp							*
 //																		*
 //		Due Date:		Dec 9 2019										*
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
#include <fstream>

using namespace std;

const int TESTNUM = 4;
const int STUDENTS = 3;
//prototype

void getTests(double[STUDENTS][TESTNUM]);
double totalTest(double[STUDENTS][TESTNUM]);
double averageTest(double[STUDENTS][TESTNUM]);
void averageEachTest(double[STUDENTS][TESTNUM], double[TESTNUM]);
void averageEachStudent(double[STUDENTS][TESTNUM], double[STUDENTS]);
double getHighest(double[STUDENTS][TESTNUM]);
void getHighestOfEachTest(double[STUDENTS][TESTNUM], double[TESTNUM]);
void report(double[STUDENTS][TESTNUM]);

int main()
{
	double tests[STUDENTS][TESTNUM];
	report(tests);
}
//*************************************************************************
//reads the file into an array
void getTests(double tests[STUDENTS][TESTNUM])
{
	ifstream infile;
	infile.open("tests.txt");
	for (int j = 0; j < STUDENTS; j++)
	{
		for (int i = 0; i < TESTNUM; i++)
		{

			infile >> tests[j][i];
		}
	}
	infile.close();
}
//*************************************************************************
//gets the total scores for all the tests
double totalTest(double tests[STUDENTS][TESTNUM])
{
	double total = 0;

	for (int j = 0; j < STUDENTS; j++)
	{
		for (int i = 0; i < TESTNUM; i++)
		{

			total += tests[j][i];
		}
	}
	return total;
}
//*************************************************************************
//gets the overall average for tests
double averageTest(double tests[STUDENTS][TESTNUM])
{
	double total = 0;

	for (int j = 0; j < STUDENTS; j++)
	{
		for (int i = 0; i < TESTNUM; i++)
		{

			total += tests[j][i];
		}
	}
	return total / (STUDENTS * TESTNUM);
}
//*************************************************************************
//gets the average per test
void averageEachTest(double tests[STUDENTS][TESTNUM], double avgtest[])
{
	double total = 0;

	for (int j = 0; j < TESTNUM; j++)
	{
		total = 0;
		for (int i = 0; i < STUDENTS; i++)
		{

			total += tests[i][j];
		}
		avgtest[j] = total / STUDENTS;
	}
}
//*************************************************************************
//gets the average for each student
void averageEachStudent(double tests[STUDENTS][TESTNUM], double avgtest[])
{
	double total = 0;

	for (int j = 0; j < STUDENTS; j++)
	{
		total = 0;
		for (int i = 0; i < TESTNUM; i++)
		{

			total += tests[j][i];
		}
		avgtest[j] = total / TESTNUM;
	}
}
//*************************************************************************
//get highest score of all the tests
double getHighest(double tests[STUDENTS][TESTNUM])
{
	double highest = tests[0][0];
	for (int j = 0; j < STUDENTS; j++)
	{
		for (int i = 0; i < TESTNUM; i++)
		{
			if (tests[j][i] > highest)
			{
				highest = tests[j][i];
			}
		}
	}
	return highest;
}
//*************************************************************************
//gets the highest scre for each test
void getHighestOfEachTest(double tests[STUDENTS][TESTNUM], double hightest[])
{
	double highest = 0;

	for (int j = 0; j < TESTNUM; j++)
	{
		highest = 0;
		for (int i = 0; i < STUDENTS; i++)
		{
			if (tests[i][j] > highest)
			{
				highest = tests[i][j];
			}
		}
		hightest[j] = highest;
	}
}
//*************************************************************************
// gets the lowest score for each student
void getLowestOfEachStudent(double tests[STUDENTS][TESTNUM], double lowtest[])
{
	double lowest = 0;

	for (int j = 0; j < STUDENTS; j++)
	{
		lowest = tests[0][0];
		for (int i = 0; i < TESTNUM; i++)
		{

			if (tests[j][i] < lowest)
			{
				lowest = tests[j][i];
			}
		}
		lowtest[j] = lowest;
	}
}
//*************************************************************************
// reports the results of the math operation to the user.
void report(double tests[STUDENTS][TESTNUM])
{
	double avgEachTest[TESTNUM];
	double avgEachStudent[STUDENTS];
	double highestTests[TESTNUM];
	double lowestTests[TESTNUM];
	getTests(tests);
	cout << fixed << setprecision(2);
	cout << "Total for all tests is: " << totalTest(tests) << endl;
	cout << "Please Enter to Continue";
	cin.get();
	cout << "The average for all test is: " << averageTest(tests) << endl;
	cout << "Please Enter to Continue";
	cin.get();
	averageEachTest(tests, avgEachTest);
	for (int j = 0; j < TESTNUM; j++)
	{
		cout << "Average for test #" << j+1 << ": " << avgEachTest[j] << endl;

	}
	cout << "Please Enter to Continue";
	cin.get();
	averageEachStudent(tests, avgEachStudent);
	for (int j = 0; j < STUDENTS; j++)
	{
		cout << "Average for Student #" << j + 1 << ": " << avgEachStudent[j] << endl;

	}
	cout << "Please Enter to Continue";
	cin.get();
	cout << "The highest score is: " << getHighest(tests) << endl;
	cout << "Please Enter to Continue";
	cin.get();
	getHighestOfEachTest(tests, highestTests);
	for (int j = 0; j < TESTNUM; j++)
	{
		cout << "Highest score for test #" << j + 1 << ": " << highestTests[j] << endl;

	}
	cout << "Please Enter to Continue";
	cin.get();
	getLowestOfEachStudent(tests, lowestTests);
	for (int j = 0; j < STUDENTS; j++)
	{
		cout << "lowest score for student #" << j + 1 << ": " << lowestTests[j] << endl;

	}
	cout << "Please Enter to Continue";
	cin.get();
}

/*
Total for all tests is: 955.00
Please Enter to Continue
The average for all test is: 79.58
Please Enter to Continue
Average for test #1: 78.33
Average for test #2: 86.67
Average for test #3: 76.67
Average for test #4: 76.67
Please Enter to Continue
Average for Student #1: 78.75
Average for Student #2: 78.75
Average for Student #3: 81.25
Please Enter to Continue
The highest score is: 90.00
Please Enter to Continue
Highest score for test #1: 85.00
Highest score for test #2: 90.00
Highest score for test #3: 90.00
Highest score for test #4: 80.00
Please Enter to Continue
lowest score for student #1: 70.00
lowest score for student #2: 60.00
lowest score for student #3: 70.00
Please Enter to Continue
*/