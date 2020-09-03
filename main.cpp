//
//  main.cpp
//  Exercise #1
//
//  Created by Andrew Cleveland on 9/3/20.
//  Copyright © 2020 Andrew Cleveland. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string lastName;
	int stuScore;
	int totPoints = 0;
	int gradeCounter;
	float grade;
	string message;
	
	cout << "Enter last name: ";
	cin >> lastName;
	for (gradeCounter = 0; gradeCounter < 3; gradeCounter++)
	{
		cout << "Enter grade " << gradeCounter + 1 << " : ";
		cin >> stuScore;
		//Incase guess is not acceptable
		/*if(stuScore(!>=0 && !<=100))
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "That input was not accepted, please enter a number" << endl;
			cin >> stuScore;
		}*/
		totPoints += stuScore;
		
	}
	
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
