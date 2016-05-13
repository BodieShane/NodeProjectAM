//
//  HashTable.hpp
//  NodeInXCode
//
//  Created by Shane, Bodie on 5/5/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp

#include <stdio.h>
#include "CTECARRAY.cpp"
#include "HashNodeAM.cpp"
#include "CTECList.cpp"

namespace CTECData
{
    template <class Type>
    class MorningHashTable
    {
    private:
        int capacity;
        int tableCapacty;
        double effciencyPercentage;
        int tableSize;
        int size;
        Type * internalStorage;
        CTCData::HashNodeAM<Type>* internalArray;
        CTECList <HashNodeAM <Type>>tableStorage;
        

        int findPosition( CTCData::HashNodeAM<Type>   currentNode);
         int findTablePosition( CTCData::HashNodeAM<Type>   currentNode);
        int handleCollision(HashNodeAM<Type>currentNode);
        int findTablePosion (HashNodeAM<Type>);
        void updateSize();
        void updateTableCapacit();
    
        int getNextPrime();
        bool isPrime(int candidateNumber);
         
    public:
        MorningHashTable();
        ~MorningHashTable();
        
        void add (HashNodeAM<Type>   currentNode);
        void addoTable(HashNodeAM<Type>currentNode);
        bool remove(HashNodeAM<Type>currentNode);
        bool contains (HashNodeAM<Type>   currentNode);
        int getSize();
        
        
        
    };
}

#endif /* HashTable_hpp */


