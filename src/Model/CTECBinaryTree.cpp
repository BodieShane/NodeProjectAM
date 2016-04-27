//
//  CTECBinaryTree.cpp
//  NodeInXCode
//
//  Created by Shane, Bodie on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "CTECBinaryTree.hpp"


using namespace std;

template <class Type>
CTECBinaryTree<Type> :: CTECBinaryTree()
{
    while (root != nullptr)
    {
        remove(root);
    }
}

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

template <class Type>
TreeNode<Type> * CTECBinaryTree<Type> :: getRightMosetChile(CTECBinaryTree<Type> *leftSubTree)
{
    TreeNode<Type> *rightNode = leftSubTree-getRoot();
    while(rightNode->getRightChild()!= nullptr)
    {
        rightNode = rightNode ->getRightMosetChile;
    }
    return rightNode;
}

template <class Type>
TreeNode<Type> * CTECBinaryTree<Type> :: getLeftMosetChile(CTECBinaryTree<Type> *rightSubTree)
{
    TreeNode<Type> *leftNode = rightSubTree-getRoot();
    while(leftNode->getRightChild()!= nullptr)
    {
        leftNode = leftNode ->getLeftMostChild;
    }
    return leftNode;
}

template<class Type>
void CTECBinaryTree<Type>:: remove(const Type &value)
{
    TreeNode<Type> * current =root;
    TreeNode<Type> * trailing = current;

    if (!contains(value))
    {
        return ;
    }
    else
    {
        while (current !=nullptr && current->getValue() != value)
        {
            trailing = current;
            if(current->getValue()>value)
            {
                current = current->getLeftChild();
            }
            else
            {
                current = current -> getRightChild();
            }
            
            if (current == root)
            {
                remove(root);
            }
            else if (trailing-> getValue() > value)
            {
                remove(trailing->getLeftChild);
            }
            else
            {
                remove(trailing->getRightChild);
            }
            
        }
        
        
        /*
         Find the node.
         Check to sehow many child nodes;
         if 0
            delete that node
         else if only left
            replace with left
         else if onley right
            replace wiht right
            delete the old one
         else boht 
            find LMC/RMC
         swap with 
         do - left onlyright only
         */
        
        
        
    }
    
}

template<class Type>
void CTECBinaryTree<Type> :: remove(TreeNode<Type> * nodeToRemove)
{
    TreeNode<Type> * current;
    TreeNode<Type>* trailing;
    TreeNode<Type> * temp;
    
    if(nodeToRemove == nullptr)
    {
        cerr << "Doh! You can't remove an empty non existent-thing" << endl;
    }
    else if(nodeToRemove->getRightMosetChile()== nullptr && nodeToRemove->getLeftMosetChile()== nullptr)
    {
        temp=nodeToRemove;
        nodeToRemove = nullptr;
        delete temp;
    }
    else if(nodeToRemove->getRightMosetChile()== nullptr )
    {
        temp=nodeToRemove;
        nodeToRemove = temp->getLeftChild();
        delete temp;
    }
    else if(nodeToRemove->getLeftMosetChile()== nullptr)
    {
        temp=nodeToRemove;
        nodeToRemove = temp->getRightChild();
        delete temp;
    }
    else
    {
        current = nodeToRemove->getLeftChild();
        trailing = nullptr;
        while(current -> getRightChild!= nullptr)
        {
            trailing = current;
            current=current->getRightChild();
        }
        nodeToRemove->setValue(current->getValue());
        if(trailing == nullptr)
        {
            nodeToRemove ->setLeftChild(current->getLeftChild());
        }
        else
        {
            trailing ->setRightChild(current->getLeftChild());
        }
        delete current;
    }
}