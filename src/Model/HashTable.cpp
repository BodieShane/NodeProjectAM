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
    this -> internalStorage = new  CTCData::HashNodeAM<Type> [capacity];
}

template <class Type>
MorningHashTable<Type> :: ~MorningHashTable<Type>()
{
    delete [] internalStorage;
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
                positionToInsert =(positionToInsert+ 1) % capacity;
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
bool MorningHashTable<Type:: contains(HashNodeAM<Type>   currentNode)
{
    bool isInTable = flase;

    int idex = findPosition(currentNode);
    while(internlStorage[index] != nullptr && !isInTable)
    {
        if(interanalStorage[index].getValue() ++ currentNode.getValue())
        {
            isInTable = true;
        }
        else
        {
            index = (index +1) %capacity;
        }
        
        index = (index +1) % capacity;
    }
    retunr isInTale;
}

