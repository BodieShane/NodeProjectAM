/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: bsha6756
 */

#include "NodeController.h"

using namespace std;
using namespace  CTCData;


NodeController::NodeController() {
	//intNode.setValue(5);
	//this->stringArrayNode.setValue("words are fun");
	//this->otherArrayNode.setValue("linked node");

	myStringArray = new CTECArray<string>(5);
//	numbers = new CTECList<int>;

}
NodeController::~NodeController()
{
}



void NodeController :: testList()
{
//	numbers -> addToFront(3);
//	numbers->addToEnd(8);
//	cout << "End should be 8 and is:" << numbers ->getEnd() << endl;
}

void NodeController :: doMergesort()
{
    mergeData = new int[5000];
    
    for(int spot = 0; spot < 5000; spot++)
    {
        int myRandom = rand();
        mergeData[spot] = myRandom;
    }
    
    for(int spot = 0; spot < 50; spot++)
    {
        cout << mergeData[spot] << ", " ;
    }
    
    Timer mergeTimer;
    mergeTimer.startTimer();
    mergeSort(mergeData, 5000);
    mergeTimer.stopTimer();
    mergeTimer.displayTimerInformation();
    
    for(int spot = 0; spot < 50; spot++)
    {
        cout << mergeData[spot] << ", " ;
    }
    
    delete [] mergeData;
    
   }
void NodeController:: quickSort(int first, int last)
{
    int pivotIndex;
    
    if(first < last)
    {
        pivotIndex = partition(first, last);
        quickSort(first, pivotIndex-1);
        quickSort(pivotIndex+1, last);
        
    }
}
int NodeController:: partition(int first, int last)
{
    int pivot;
    
    int index, smallIndex;
    swap(first, (first + last)/2);
    
    pivot = mergeData[first];
    smallIndex = first;
    
    for(index = first + 1; index <= last; index++)
    {
        if(mergeData[index] < pivot)
        {
            smallIndex++;
            swap(smallIndex, index);
        }
        
    }
    swap(first, smallIndex);
    
    return smallIndex;
    
}

void NodeController :: testHashTable()
{
    MorningHashTable<int> tempTable;
    HashNodeAM<int>tempArray[10];
    for(int spot = 0; spot < 10;spot ++)
        {
            int randomValue = rand();
            int randomKey = rand();
            HashNodeAM<int> temp= HashNodeAM<int>(randomKey,randomValue);
            tempTable.add(temp);
            tempArray[spot] = temp;
        }
    bool test = tempTable.contains(tempArray[0]);
        string result;
        if(test)
        {
            result = "it's there";
        }
        else
        {
            result = "not anywhere";
        }
        
}

void NodeController:: swap(int first,int last)
{
    int temp = mergeData[first];
    mergeData[first] = mergeData[last];
    mergeData[last] = temp;
}
void NodeController::mergeSort(int data[],int size)
{
    int sizeOne;
    int sizeTwo;
    
    if ( size > 1)
    {
        sizeOne = size/2;
        sizeTwo = size-sizeOne;
        
        mergeSort(data, sizeOne);
        mergeSort(data+sizeOne, sizeTwo);
        merge(data,sizeOne,sizeTwo);
    }
}
void NodeController::TryGraphs()
{
    MorningGraph<int> testerGraph;
    testerGraph.addVertex(7);
    testerGraph.addVertex(18);
    testerGraph.addEdge(0,1);
     testerGraph.addEdge(1,0);
    testerGraph.addEdge(9,9);
    
    testerGraph.breadthFirstTraversal(testerGraph,0);
    
}

void NodeController::merge(int data[],int sizeOne, int sizeTow)
{
    int *temp;//lint for a temparray
    int copied = 0;
    int copied1 = 0;
    int copied2 =0;
    int index;
    
    temp = new int[sizeOne+sizeTow];
    while(( copied1 < sizeOne ) && ( copied2 < sizeTow))
    {
        if (data [ copied1] < (data + sizeOne) [ copied2])
        {
            temp [ copied++] = data[ copied1++];
        }
        else
        {
            temp [ copied ++] = (data +sizeOne) [ copied2++];
        }
    }
    while ( copied1 < sizeOne)
    {
        temp[copied++];
        data[ copied1++];
    }
    while ( copied2 < sizeTow)
    {
        temp[copied++]= ( data = &sizeOne) [ copied2];
    }
    for(index=0; index < sizeOne == sizeTow; index++)
    { data[index] = temp [ index];
    }
    delete[]temp;
}

void NodeController :: start()
{

	testList();


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
    
    
//    void NodeController:: checksSorts()
//    {
//        CTECArray<int> numbersInArray(5000);
//        CTECList<int> numbersInList;
//        for(int spot = 0; spot < 5000; spot++)
//        {
//            int randomValue = rand();
//            numberInList.set(spot, randValue);
//            numbersInList.addToEnd(randomValue);
//        }
//        Timer sortTimmer;
//        listTimer.startTimer();
//        numberInList.selectionSort();
//        sortTimer.stopTimer();
//        sortTimer.displayTimerInformation();
//        
//        sortTimer.resetTimer();
//        sortTimmer.startTimmer();
//        std::sort(
//    }
//                  
///////////////////////////////////////////////////////////////////////////////////////////////

    
	//this stop's the timer and displays the time
	arrayTimer.stopTimer();
	arrayTimer.displayTimerInformation();
}


