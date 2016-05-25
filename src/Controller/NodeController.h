/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: bsha6756
 */

#ifndef NODECONTROLLER_H_
#define NODECONTROLLER_H_

#include <iostream>

#include "../Model/Node.cpp"
#include "../Model/ArrayNode.cpp"
#include "../Model/CTECArray.cpp"
#include "../Model/CTECList.cpp"
#include "../Model/Timer.h"
#include "../Model/MorningGraph.cpp"
#include "../Model/HashTable.cpp"

using namespace std;



class NodeController {
    
public:
    NodeController();
    virtual ~NodeController();
    void start();
    


private:
    CTECArray<int>* notHipsterInts;
    CTECArray<string>* myStringArray;
    CTECList<int>* sortable;
    CTECList<string>* coolStrings;
    Timer arrayTimer;
    
    
    void sortData();
    void testList();
    void searchTest();
    void TryGraphs();
    
    int * mergeData;
    void doMergesort();
    void mergeSort(int data [], int size);
    void merge(int data [], int sizeOne, int sizeTwo);
    void doQuickSort();
    void quickSort(int first, int last);
    int partition(int first, int last);
    void swap(int first, int last);
    void print();
    
    void testHashTable();
};

#endif /* NODECONTROLLER_H_ */
