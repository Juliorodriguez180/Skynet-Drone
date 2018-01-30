// Skynet Drone.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
//This is needed for random number seeding
#include <ctime>
using std:cout;
using std::endl;



int main()
{
 
	//Generate Random Enemy Location on 8x8 grid.
	cout << "Generate Random Enemy Location on 8x8 grid...." << endl;
	// Required a really randomized nnu,ber by the help

	srand(time(0));


	int searchGridHighNumber = 64
		int searchGridLowNumber = 1
		int enemyLocation = rand() % searchGridHighNumber + searchGridLowNumber;

	cout << "The Enemy is located at location"

	   
	return 0;
}

