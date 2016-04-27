//
//  MorningGraph.cpp
//  NodeInXCode
//
//  Created by Shane, Bodie on 4/25/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "MorningGraph.hpp"

using namespace CTECData;

template<class Type>
const int MorningGraph<Type> :: MAXIMUM;

template <class Type>

void MorningGraph<Type>:: addEdge(int source,int target)
{
    assert(source < size());
    assert(target < size());
    edges[source][target] = true;
}

template<class Type>
void MorningGraph<Type> :: addVertex(const Type& vertexlable)
{
    int newVertexNmber;
    int otherNumber;
    
    assert(size() < MAXIMUM);
    
    newVertexNmber = manyVertices;
    ++manyVertices;
    for(otherNumber = 0; otherNumber< manyVertices; otherNumber ++)
    {
        edges[otherNumber][newVertexNmber] = false;
        edges[newVertexNmber] [otherNumber] = false;
    }
    
    vertexlable[newVertexNmber] = vertexlable;
}

template<class Type>
bool MorningGraph<Type>:: isEdge(int source, int target) const
{
    bool connected = false;
    
    assert(source < size() && target < size());
    connected = edges [source][target];
    
    return connected;
}
template <class Type>
void MorningGraph<Type>::depthFirstTaversal(MorningGraph<Type> currentGraph,int vertex)
{
    bool markedVertices[MAXIMUM];
    assert(vertex < currentGraph.size());
    std::fill_n(markedVertices, currentGraph.size(),false);
    depthFirstTraersl(currentGraph,vertex,markedVertices);
    
}
template <class Type>
void MorningGraph<Type>:: depthFirstTraversal(MorningGraph<Type> currentGraph,int vertex, bool * markdVertices)
{
    std::set<int>connections = currentGraph.neighbos(vertex);
    std::set<int>::iterator setIterator;
    
    markdVertices[vertex] = true;
    cout<< currentGraph[vertex] << endl;
    
    for(setIterator = connections.begin(); setIterator != connectionsend(); setIterator++)
    {
        if(!markdVertices[*setIterator])
        {
            depthFirstTraversal(currentGraph,*setIterator,markdVertices);
        }
    }
}
template<class Type>
void MorningGraph<Type :: breadthFirstTraversal(MorningGraph<Type> currentGraph, int vertex)
{
    bool markedVertices[MAXIMUM];
}
template<class Type>
Type& MorningGraph <Type>:: operator[] (int vertex)
{
    assert(vertex < size());
    return lables[vertex];
    
}
template<class Type>
Type MorningGraph<Type>:: operator[] (int vertex)const
{
    assert(vertex < size());
    return lables[vertex];
    
}
template<class Type>
std::set<int> MorningGraph<Type> ::neighbors (int vertex) const
{
    std::set<int> answer;
    assert(vertex<size());
    for(int index=0; index < size(); index++)
    {
        if (edges [vertex][index])
        {
            answer.insert(index);
        }
    }
    return answer;
}
template<class Type>
void MorningGraph<Type> :: removeEdge(int source,int target)
{
    assert(source <size() && target<size());
    edges[source][target] = false;
}