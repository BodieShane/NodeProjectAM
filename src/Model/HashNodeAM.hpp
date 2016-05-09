//
//  HashNodeAM.hpp
//  NodeInXCode
//
//  Created by Shane, Bodie on 5/9/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef HashNodeAM_hpp
#define HashNodeAM_hpp
#include <stdio.h>// For nullptr

namespace CTCData
{
    template <class Type>
    class HashNodeAM
    {
    public:
        int key;
        Type value;
    private:
        HashNodeAM(int key, const Type& value);
        void setKey(int key);
        void setValue(const Type& value);
        int getKey();
        Type getValue;
    };
    
}

#endif /* HashNodeAM_hpp */
