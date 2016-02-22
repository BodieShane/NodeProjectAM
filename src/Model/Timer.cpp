/*
 * Timer.cpp
 *
 *  Created on: Feb 16, 2016
 *      Author: bsha6756
 */

#include "Timer.h"
#include <iomanip>
#include <iostream>
using namespace std;
//***************************************************************************************
Timer::Timer() {
	// This is the how long it takes to run
	executionTime = 0;

}
/////////////////////////////////////////////////////////////////////////////////////////

//***************************************************************************************
Timer::~Timer() {


}
///////////////////////////////////////////////////////////////////////////////////////////

//***************************************************************************************
void Timer :: displayTimerInformation()
{

	cout << fixed;
	cout << setprecision(8);
	// This it what will show up when you run the code anthing in the "" will show up as text in the Console
	cout << executionTime << " us (microseconds) for the code " << endl;
	cout << "which is" << float(executionTime) / CLOCKS_PER_SEC<< "seconds" << endl;
}
///////////////////////////////////////////////////////////////////////////////////////////

//***************************************************************************************
void Timer :: startTimer()
{
	// this is making the executionTime (a int) equal to the timmer on the computer. Calling this run's the program
	executionTime = clock();
}
///////////////////////////////////////////////////////////////////////////////////////////

//***************************************************************************************
void Timer :: stopTimer()
{

	executionTime = clock() - executionTime;
}
///////////////////////////////////////////////////////////////////////////////////////////

//***************************************************************************************
void Timer :: resetTimer()
{
	executionTime = 0;
}
///////////////////////////////////////////////////////////////////////////////////////////

//***************************************************************************************
long Timer:: getExecutionTimeInMicroseconds()
{
	return executionTime;
}
///////////////////////////////////////////////////////////////////////////////////////////


