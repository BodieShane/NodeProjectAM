/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: bsha6756
 */

#include "NodeController.h"


NodeController::NodeController() {
	intNode.setValue(5);
	this->stringArrayNode.setValue("words are fun");
}

NodeController::~NodeController()
{
	// TODO Auto-generated destructor stub
}
void NodeController :: start()
{
	cout << intNode.getValue() << endl;
	cout << stringArrayNode.getValue() << endl;
}
