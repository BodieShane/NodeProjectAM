//
//  MorningGraph.hpp
//  NodeInXCode
//
//  Created by Shane, Bodie on 4/25/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef MorningGraph_hpp
#define MorningGraph_hpp
#include <set>

#include <stdio.h>

#endif /* MorningGraph_hpp */
namespace CTECData
{
    template <class Type>
    class MorningGraph
    {
    private:
        static const int MAXIMUM = 20;
        bool edges [MAXIMUM][MAXIMUM]; // This is the adjacency matrix.
        Type lables[MAXIMUM];
        int manyVertices;
    public:
        MorningGraph();
       virtual ~MorningGraph();
        
        void addVertex(const Type & lablel);
        void addEdge(int source, int target);
        void removeEdge(int source, int target);
        Type& operator  [](int vertex);
        int size() const;
        bool isEdge(int source, int target) const;
        std::set<int> neighbors(int vertex) const;
        Type operator [](int vertex) const;
        void depthFirstTraversal(MorningGraph<Type> graph, int vertex);
        void breadthFirstTraversal(MorningGraph<Type> graph, int vertex);
    };
}