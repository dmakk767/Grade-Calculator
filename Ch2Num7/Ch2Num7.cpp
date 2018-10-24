// Ch2Num7.cpp : Defines the entry point for the console application.


//This program will calc the total grade for N classroom exercises
//user input includes number of exercises(N), score, and possible score

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//variables
	int N;
	
	cout << "Please enter the number of exercises for your class: " << endl;
	cin >> N;
	int points =0, pointTotal=0, possible=0, possibleTotal = 0;
	int counter = 0;
	while (N-- > 0)
	{
		

		counter++;
		cout << "What was your score on exercise " << counter << "?" << endl;
		cin >> points;
		cout << "What was total score possible on exercise " << counter << "?" << endl;
		cin >> possible;
		pointTotal = pointTotal + points;
		possibleTotal = possibleTotal + possible;

		if (N == 0)
		{
			double percentage = (double)pointTotal / possibleTotal * 100;
			cout << "Your total is " << pointTotal << " points out of " << possibleTotal <<
				" points possible, or " << percentage << "%" << endl;
		}
		
	}
	
    return 0;
}

