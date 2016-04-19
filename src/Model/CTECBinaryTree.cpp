//
//  CTECBinaryTree.cpp
//  NodeInXCode
//
//  Created by Shane, Bodie on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "CTECBinaryTree.hpp"

template<class Type>

bool CTECBinaryTree<Type> ::insert (const Type& value)
{
    TreeNode<Type> * trailCurrent;
    TreeNode<Type> * newNode = new TreeNode<Type>(value);
    assert(newNode!=nullptr);
    TreeNode<Type> * current = root;
    if (root== nullptr)
    {
        root = newNode;
    }
    else
    {
        while (current != nullptr)
        {
            trailCurrent = current;
            if(current -> getValue == value)
            {
                return false;
            }
            else if ( current -> getValue > value)
            {
                current = current -> getLeftChiled;
            }
            else
            {
                current = current -> getRightChiled;

            }
        }
        if (trailCurrent -> getValue > value)
        {
           trailCurrent ->  setLeftChiled(newNode) ;
        }
        else
        {
            trailCurrent ->  setRightChiled(newNode) ;
        }
        trailCurrent -> setParent(trailCurrent);

        }
    
        return true;

   }
template<class Type>
Type CTECBinaryTree<Type>:: remove(const Type &value)
{
    if (!contains(value))
    {
        return value;
    }
    else
    {
        
    }
}