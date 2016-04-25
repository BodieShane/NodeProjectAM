//
//  MorningGraph.hpp
//  NodeInXCode
//
//  Created by Shane, Bodie on 4/25/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef MorningGraph_hpp
#define MorningGraph_hpp

#include <stdio.h>

#endif /* MorningGraph_hpp */
namespace CTECData
{
    template <class Type>
    class MorningGraph
    {
    private:
        static const int MAXIMUM = 20;
        
    public:
        MorningGraph();
       virtual ~MorningGraph();
        
        void addVertex(const Type & lablel);
        void addEdge(int source, int target);
        void removeEdge(int source, int target);
        Type& operator  [](int vertex);
    };
}