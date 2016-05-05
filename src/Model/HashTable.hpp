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

namespace CTECData
{
    template <class Type>
    class MorningHashTable
    {
    private:
        int capasity;
        double effciencyPercentage;
        int size;
        Type * internalStorage;
        

        int findPosition(const Type value);
        int handleCollision(const Type&value);
        void updateSize();
    
    public:
        MorningHashTable();
        ~MorningHashTable();
        void add (const Type& value);
        bool remove(const Type&value);
        bool contains (const Type&value);
        
        
        
    };
}

#endif /* HashTable_hpp */


