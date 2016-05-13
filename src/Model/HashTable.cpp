//
//  HashTable.cpp
//  NodeInXCode
//
//  Created by Shane, Bodie on 5/5/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "HashTable.hpp"
#include <cmath>

using namespace CTECData;


template <class Type>
MorningHashTable < Type > :: MorningHashTable()
{
    this-> capacity = 101;
    this ->efficiencyPercentage = .667;
    this-> size = 0;
    this->tableStorage = new CTECList<HashNodeAM <Type>>[capacity];
    this -> internalStorage = new  CTCData::HashNodeAM<HashNodeAM <Type>> [capacity];
}

template <class Type>
MorningHashTable<Type> :: ~MorningHashTable<Type>()
{
    delete [] internalStorage;
    delete [] tableStorage;
}

template <class Type>
void MorningHashTable<Type> :: addoTable(HashNodeAM<Type>currentNode)
{
    if(this->siz/this->capacity>=this-> efficiencyPercentage)
    {
        updateTableCapacit();
    }
    int positionToInsert = findPosition(currentNode);
    //if the spot is empty,make a new liost and add the node
    if(tableStorage[positionToInsert] == nullptr)
    {
        CTECList<HashNodeAM<Type>> hashList;
        tableStorage[positionToInsert] + hashList;
        hashList.addEnd(currentNode);
    }
    else//else add the node
    {
        tableStorage[positionToInsert].addEnd(currentNode);
    }
}

template <class Type>
int MorningHashTable<Type>:: getSize()
{
    return this -> size;
}

template <class Type>
void MorningHashTable<Type>::add(CTCData::HashNodeAM<Type>   currentNode)
{
    
    int  positionToInsert = findPosition(currentNode);
    
    if(!contains(currentNode))
    {
        if(this->size/this->capacity >= this-> efficiencyPercentage)
        {
            updateSize();
        }
        int positionToInsert = findPosition (currentNode);
    
        if(internalStorage[positionToInsert] != nullptr)
        {
            //loop over the interalStorage to find the next empyt slot.
            // Insert the value there.
            
            
            while(internalStorage [ positionToInsert] != nullptr)
            {
                //positionToInsert =(positionToInsert+ 1) % capacity;
                positionToInsert = handleCollision(currentNode);
            }
        }
        internalStorage[positionToInsert] = currentNode;

    }
}

template <class Type>
int MorningHashTable<Type> :: findPosition(CTCData::HashNodeAM<Type>   currentNode)
{
    int position = 0;
    
    position = currentNode.getKey() % capacity;
    
    return position;
}
template <class Type>
int MorningHashTable<Type> :: findTablePosition(CTCData::HashNodeAM<Type>   currentNode)
{
    int position = 0;
    
    position = currentNode.getKey() % tableCapacty;
    
    return position;
}


template <class Type>
int MorningHashTable<Type> :: getNextPrime()
{
    int nextPrime = (capacity *2) +1;
    while(!isPrime(nextPrime))
    {
        nextPrime++;
    }return nextPrime;
}

template <class Type>
bool MorningHashTable<Type> :: isPrime(int cadidateNumber)
{
    bool isPrime = true;
    
    if(cadidateNumber <= 1)
    {
        return false;
    }
    
    else if (cadidateNumber == 2 || cadidateNumber ==3 )
    {
        isPrime = true;
    }
    else
    {
        for (int next = 3; next <= sqrt(cadidateNumber) +1; next += 2)
        {
            if(cadidateNumber % next == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    
    return isPrime;
}

template<class Type>
void MorningHashTable<Type>:: updateTableCapacit()
{
    int updateCapacity = getNextPrime();
    CTECList<HashNodeAM<Type>> * updatedTableStorage = new CTECList<HashNodeAM<Type>> [updateCapacity];
    
    int oldTableCapity = tableCapacty;
    tableCapacty = updateCapacity;
    for(int index = 0; index < oldTableCapity; index++ )
    {
        if(tableStorage [index] != nullptr)
        {
            CTECList<HashNodeAM<Type>> temp = tableStorage[index];
            for ( int innerIndex = 0; innerIndex < tableStorage[index].getSize(); innerIndex++)
            {
                int updatedTablePosition = findPosition(temp.get(index));
                if(updatedTableStorage[updatedTablePosition] == nullptr)
                {
                    CTECList<HashNodeAM<Type>> updatedList;
                    updatedList.ddEnd(temp.get(index));
                }
                else
                {
                    updatedTableStorage[updatedTablePosition].addEnd(temp.getFromIndex(index));
                }
            }
        }
    }
    
}


template <class Type>
void MorningHashTable<Type> :: updateSize()
{
    int updatedCapacity = getNextPrime();
    HashNodeAM<Type> * updatedStorage =  new HashNodeAM<Type> [updatedCapacity];
    int oldCapacity = capacity;
    capacity = updatedCapacity;
    
    
    for(int index = 0; index < oldCapacity; index ++)
    {
        if (internalStorage[index] != nullptr)
        {
            int updatedPosition = findPosition(internalStorage[index]);
            updatedStorage[updatedPosition] = internalStorage[index];
            
            
        }
    }
    
    internalStorage = updatedStorage;
}

template<class Type>
bool MorningHashTable<Type>:: contains(HashNodeAM<Type>   currentNode)
{
    bool isInTable = false;

    int index = findPosition(currentNode);
    while(internalStorage[index] != nullptr && !isInTable)
    {
        if(internalStorage[index].getValue() + currentNode.getValue())
        {
            isInTable = true;
        }
        else
        {
            index = (index + 1) %capacity;
        }
        
        index = (index + 1) % capacity;
    }
    return isInTable;
}

template <class Type>
bool MorningHashTable <Type> :: remove(HashNodeAM<Type>currentNode)
{
    bool wasRemoved = false;
    
    if (contains(currentNode))
    {
        int index = findPosition(currentNode);
        while(internalStorage[index] != nullptr && !wasRemoved)
        {
            if (internalStorage [index].getValue() == currentNode.getValue())
            {
                wasRemoved = true;
                internalStorage [index] = nullptr;
                size--;
                
            }
            else
            {
                index = (index + 1) % capacity;
            }
        }
        
    }
    
    return wasRemoved;
    
}
template<class Type>
int MorningHashTable<Type> :: handleCollision(HashNodeAM<Type>currentNode)
{
    int reHashedPosition =  findPosition(currentNode);
    int random = rand();
    reHashedPosition = (random + (reHashedPosition * reHashedPosition)) % capacity;
    
    return reHashedPosition;
}