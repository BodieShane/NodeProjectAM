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
    
    
    this -> internalStorage = new Type [capacity];
}
template <class Type>
MorningHashTable<Type> :: ~MorningHashTable<Type>()
{
    delete [] internalStorage;
}
template <class Type>
void MorningHashTable<Type>::add(const Type& value)
{
    
    int  positionToInsert = findPosition(Value);
    if(!contains(value))
    {
        int positionToInsert = findPosition (value);
    
        if(internalStorage[positionToInsert] != nullptr)
        {
            //loop over the interalStorage to find the next empyt slot.
            // Insert the value there.
            
            
            while(internalStorage [ positionToInsert] != nullptr)
            {
                positionToInsert + 1 % size;
            }
            internalStorage[positionToInsert] = value;
        }
        else
        {
            internalStorage[positionToInsert] = value;
        }
    }
}



template <class Type>
int MorningHashTable<Type>:: getSize()
{
    return this -> size();
}
