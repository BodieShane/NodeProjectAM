/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: bsha6756
 */

#ifndef NODECONTROLLER_H_
#define NODECONTROLLER_H_

#include<iostream>
#include"../Model/Node.h"
#include<string>
#include"../Model/Node.cpp"
#include"../Model/ArrayNode.h"
#include"../Model/ArrayNode.cpp"

using namespace std;



class NodeController {

private: Node<int>intNode;
ArrayNode<string> stringArrayNode;
ArrayNode<string> otherArrayNode;

public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* NODECONTROLLER_H_ */
