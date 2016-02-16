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

	arrayTimer.startTimer();
	//cout << intNode.getValue() << endl;
	//cout << stringArrayNode.getValue() << endl;

	string first = "first";
	string second = "not second";
	string third = "trois";
	string forth = " 4";
	string fifth = "5";


	// I need to re bild this

	for (int index = 0; index < myStringArray ->getSize(); index++)
	{
		cout << "The contents at " << index << " are:" << myStringArray ->get(index)<< endl;
		myStringArray->set(0, first);
			cout << myStringArray -> get(0) << endl;

			myStringArray->set(1, second);
			cout << myStringArray -> get(1) << endl;

			myStringArray->set(2, third);
			cout << myStringArray -> get(2) << endl;

			myStringArray->set(3, forth);
			cout << myStringArray -> get(3) << endl;

			myStringArray->set(4, fifth);
			cout << myStringArray -> get(4) << endl;

	}

	arrayTimer.stopTimer();
	arrayTimer.displayTimerInformation();
}


