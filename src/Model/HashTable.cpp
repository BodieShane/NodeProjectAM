//
//  HashTable.cpp
//  NodeInXCode
//
//  Created by Shane, Bodie on 5/5/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "HashTable.hpp"

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





