/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: bsha6756
 */

#ifndef NODECONTROLLER_H_
#define NODECONTROLLER_H_

#include <iostream>

#include "../Model/MorningGraph.hpp"
#include "../Model/CTECArray.cpp"
#include "../Model/CTECList.cpp"
#include "../Model/Timer.cpp"

using namespace std;



class NodeController {

private:
    Timer arrayTimer;
    void sortData();
    void testList();
    void searchTest();
    
    int *mergeData;

    void setupRandomArray();
    void doBogo();
    void tryGraphs();
    
    void swat(int first, int sexond);
    void quicksort(int data[], int size);
    void partition (int data[], int size, int pivotIndex);
    void doQuick();
    
    void doMergesort();
   
    void mergesort(int dataArr [], int size);
    void merge(int data [], int sizeOne,int sizeTwo);
	
	public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* NODECONTROLLER_H_ */
