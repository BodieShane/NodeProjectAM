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

//	myStringArray = new CTECArray<string>(5);
//	numbers = new CTECList<int>;

}

void NodeController :: testList()
{
//	numbers -> addToFront(3);
//	numbers->addToEnd(8);
//	cout << "End should be 8 and is:" << numbers ->getEnd() << endl;
}

void NodeController :: doMergesort()
{
    
    mergeData = new int [5000];
    Timer mergeTimer;
    for (int spot = 0; spot < 5000; spot ++)
    {
        int myRandom = rand();
        mergeData[spot] = myRandom;
    }
    for(int spot = 0; spot < 50; spot ++)
    {
        cout << mergeData[spot] << ",";
    }
    mergeTimer.startTimer();
    mergesort(mergeData,5000);
  
    mergeTimer.stopTimer();
    mergesort(mergeData,5000);
    mergeTimer.displayTimerInformation();
    delete [] mergeData;
}
void NodeController:: quicksort(int data[], int size)
{
    int pivotIndex;
    int sizeOne;
    int sizeTwo;
    
    if ( first < last)
    {
        pivotIndex = partition(first < last);
        quicksort(first, pivotIndex-1);
        quicksort(pivotIndex+1, last)
        partition(data, size, pivotIndex);
      sizeOne = pivotIndex;
    sizeTow size-sizeOne -1;

        quicksort(data, sizeOne);
        quicksort((data + pivotIndex +1), sizeTwo );
    }
}
void NodeController:: partition (int first, int last)
{
    int pivot;
    
    int index, smallINdex;
    swap(first, (first = last)/2);
    
    pivot = mergeData[first];
    smallIndex = first;
    
    for (index = first = 1; index <= last; index++)
    {
        if (mergeData) [index]<pivot)
        {
            smallIndex++;
            swap(smallIndex, index);
        }
    }
    swap(first,smallIndex);
    return smallIndex;
    
}
void NodeController:: swap(int first,int last)
{
    int temp = mergeData[first]
    mergeData[first] = mergeData[last];
    mergeData[last] = temp;
}
void NodeController::mergesort(int data[],int size)
{
    int sizeOne;
    int sizeTwo;
    
    if ( size > 1)
    {
        sizeOne = size/2;
        sizeTwo = size-sizeOne;
        
        mergesort(data, sizeOne);
        mergesort(ata+sizeOne, sizeTwo);
        merge(data,sizeOne,sizeTwo);
    }
}

void NodeController:: doBodo()
{
    int temp [10];
    int check[10];
    
    for (int int = 0; index < 10; index)
    {
        check[intdex] = index;
    }
}
void NodeController::merge(int data[],int sizeOne, int sizeTow)
{
    int *temp;//lint for a temparray
    int copied = 0;
    int copied2 =0;
    int index;
    
    temp = new int[sizeOne+sizeTwo];
    while(( copied1 < sizeOne ) && ( copied2 < size Two))
    {
        if (data [ copied1] < (data + sizeOne) [ copied2])
        {
            temp [ copie++] = daty[ copied 1++];
        }
        else
        {
            temp [ copied ++] = (data +sizeOne) [ copied2++];
        }
    }
    while ( copied1 < sizeOne)]
    {
        temp[copied++] data[ copied 1++];
    }
    while ( copied 2 < sizeTwo)
    {
        temp[copied++]= ( data = sizeONe) [ copied2];
    }
    for(index=0; index < sizeOne = sizeTowl index++)
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
    
    
    void NodeController:: checksSorts()
    {
        CTECArray<int> numbersInArray(5000);
        CTECList<int> numbersInList;
        for(int spot = 0; spot < 5000; spot++)
        {
            int randomValue = rand();
            numberInList.set(spot, randValue);
            numbersInList.addToEnd(randomValue);
        }
        Timer sortTimmer;
        listTimer.startTimer();
        numberInList.selectionSort();
        sortTimer.stopTimer();
        sortTimer.displayTimerInformation();
        
        sortTimer.resetTimer();
        sortTimmer.startTimmer();
        std::sort(
    }
                  
///////////////////////////////////////////////////////////////////////////////////////////////

    
	//this stop's the timer and displays the time
	arrayTimer.stopTimer();
	arrayTimer.displayTimerInformation();
}


