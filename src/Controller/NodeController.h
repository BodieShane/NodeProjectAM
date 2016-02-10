/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: bsha6756
 */

#ifndef NODECONTROLLER_H_
#define NODECONTROLLER_H_

#include<iostream>
#include<string>

#include"../Model/Node.cpp"
#include"../Model/ArrayNode.cpp"
#include "../Model/CTECArray.cpp"

using namespace std;



class NodeController {

private:
	//Node<int>intNode;
//ArrayNode<string> stringArrayNode;
//ArrayNode<string> otherArrayNode;
	CTECArray<string> * myStringArray;


public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* NODECONTROLLER_H_ */
