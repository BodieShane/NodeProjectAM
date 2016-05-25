//
//  HashNodeAM.cpp
//  NodeInXCode
//
//  Created by Shane, Bodie on 5/9/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "HashNodeAM.hpp"

using namespace CTCData;
template <class Type>

 HashNodeAM<Type> :: HashNodeAM (int key,  const Type& value)
{
    //return this->key;
    this->value = value;
}
template <class Type>
HashNodeAM<Type> :: HashNodeAM ()
{
   
}
template <class Type>

int HashNodeAM<Type>:: setKey(int key)
{
    this->key = key;
}


template<class Type>
void HashNodeAM<Type> :: setValue(const Type& value)
{
    this-> value = value;
}
template <class Type>

int HashNodeAM<Type>:: getKey()
{
    return this -> key;
}
template <class Type>
Type HashNodeAM<Type>:: getValue()
{
    return this -> value;
}