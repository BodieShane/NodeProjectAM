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

namespace CTECData
{
    template <class Type>
    class MorningHashTable
    {
    private:
        int capacity;
        double effciencyPercentage;
        int size;
        Type * internalStorage;
        CTCData::HashNodeAM<Type>* internalArray;
        

        int findPosition( CTCData::HashNodeAM<Type>   currentNode);
        int handleCollision(const Type&value);
        void updateSize();
    
    public:
        MorningHashTable();
        ~MorningHashTable();
        
        void add (CTCData::HashNodeAM<Type>   currentNode);
        bool remove(CTCData::HashNodeAM<Type>   currentNode);
        bool contains (CTCData::HashNodeAM<Type>   currentNode);
        int getSize();
        
        
        
    };
}

#endif /* HashTable_hpp */

