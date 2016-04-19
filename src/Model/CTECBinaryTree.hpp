//
//  CTECBinaryTree.hpp
//  NodeInXCode
//
//  Created by Shane, Bodie on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef CTECBinaryTree_hpp
#define CTECBinaryTree_hpp

#include "TreeNode.cpp"

template < class Type>
class CTECBinaryTree
{
private:
    TreeNode<Type>*root;
    int height;
    bool balanced;
    bool contains(Type value, CTECBinaryTree<Type> * currentTree);
    
public:
    CTECBinaryTree();
    ~CTECBinaryTree();
    

    bool insert(const Type& value);
    bool contains(Type value);
    Type remove(const Type& value);
    Type Delete (const Type& value);

    int getHeght();
    bool isBalanced();
   TreeNode<Type> * getRoot();
    
};


#endif /* CTECBinaryTree_hpp */
