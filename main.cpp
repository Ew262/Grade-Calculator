//
//  main.cpp
//  Exercise #1
//
//  Created by Andrew Cleveland on 9/3/20.
//  Copyright © 2020 Andrew Cleveland. All rights reserved.
//	CSC201 D01B Scott Davis
//
//	Takes input from user including name and grades of 3 assignments to calculate grade percentage and
//	gives feedback such as "Excellent!" or "Failed" etc


#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>

using namespace std;

int main()
{
	string lastName;	//user's name
	int stuScore = 0;	//stores individual score from user input
	int totPoints = 0;	//stores sum of user scores
	int gradeCounter;	//counts the number of grades input from the user
	float grade;		//numerical mean of grades input as a percentage
	string message;		//message associated with each grade range
	
	cout << "Enter last name: ";	//prints instruction
	cin >> lastName;				//takes user's last name
	
	//loop to repeatedly ask user for grades, verify input as valid, and upon verification, add each to the total,
	for (gradeCounter = 0; gradeCounter < 3; gradeCounter++)
	{
		cout << "Enter grade " << gradeCounter + 1 << ": ";	//	prints instructions for user
		cin >> stuScore;									//	reads in user input for grade
		if((stuScore < 0)  || (stuScore > 100) || (!cin))	//	checks input to ensure all input are numerical and in the proper range
		{
			cout << "That input was not accepted, please enter a number between 0 and 100" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			stuScore = 0;
			gradeCounter--;
		}
		else
		{
		totPoints += stuScore;
		}
	}
//	calculates grade percentage, casts int's into a grade
	grade = static_cast<float>(totPoints) / gradeCounter;
	
	cout << "Average: " << static_cast<int>(grade+0.5) << "%, ";
	if (grade > 90)
	{
		message = "Excellent";
	}
	else if (grade >= 80)
	{
		message = "Well Done";
	}
	else if (grade >= 70)
	{
		message = "Good";
	}
	else if (grade >= 60)
	{
		message = "Need Improvement";
	}
	else
	{
		message = "Fail";
	}
	cout << message << endl;
		
	return 0;
	
}
