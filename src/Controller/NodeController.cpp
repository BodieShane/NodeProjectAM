/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: bsha6756
 */

#include "NodeController.h"


NodeController::NodeController() {
	//intNode.setValue(5);
	//this->stringArrayNode.setValue("words are fun");
	//this->otherArrayNode.setValue("linked node");

	myStringArray = new CTECArray<string>(5);

}

NodeController::~NodeController()
{
	// TODO Auto-generated destructor stub
}

void NodeController :: start()
{



	////////////////////////////////
	string first = "first";		  //
	string second = "not second"; //
	string third = "trois";		  //
	string forth = " 4";		  //
	string fifth = "5";			  //
	////////////////////////////////


	//////////////////////////////////
	myStringArray -> set (0,first); //
	myStringArray -> set (1,second);//
	myStringArray -> set (2,third); //
	myStringArray -> set (3,forth); //
	myStringArray -> set (4,fifth); //
	//////////////////////////////////

	// this is used to start the timer
	arrayTimer.startTimer();


//********************************************************************************************
	// this makes the line in a loop so I can change the size whenever I add a new size to the list
	for (int index = 0; index < myStringArray ->getSize(); index++)
	{


		cout << "The contents at " << index << " are:" << myStringArray ->get(index)<< endl;



	}
///////////////////////////////////////////////////////////////////////////////////////////////

	//this stop's the timer and displays the time
	arrayTimer.stopTimer();
	arrayTimer.displayTimerInformation();
}


