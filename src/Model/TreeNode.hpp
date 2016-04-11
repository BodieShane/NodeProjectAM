//
//  TreeNode.hpp
//  NodeInXCode
//
//  Created by Shane, Bodie on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef TreeNode_hpp
#define TreeNode_hpp

#include <stdio.h>
#include"Node.h"

template < class Type>
class TreeNode : public Node<Type>
{
private:
    TreeNode * leftChild;
    TreeNode * rightChild;
    TreeNode * parent;
    
public:
    TreeNode();
    TreeNode(const Type & value);
    TreeNode (const Type & value, TreeNode<Type>*parent);
    void setRightChild(TreeNode<Type> * rightChild);
     void setLeftChild(TreeNode<Type> * leftChild);
     void setParent(TreeNode<Type> * parent);
    TreeNode<Type>* getLeftChild();
     TreeNode<Type>* getRightChild();
     TreeNode<Type>* getParent();
};


#endif /* TreeNode_hpp */
