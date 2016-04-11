//
//  TreeNode.cpp
//  NodeInXCode
//
//  Created by Shane, Bodie on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "TreeNode.hpp"

template < class Type>
TreeNode<Type> :: TreeNode(): Node<Type>()
{
    this-> leftChild = nullptr;
    this-> rightChild = nullptr;
    this-> parent = nullptr;
}