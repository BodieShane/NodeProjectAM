/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: bsha6756
 */

#include "CTECArray.h"


template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	// TODO Auto-generated constructor stub

}
template <class Type>
CTECArray<Type>::~CTECArray()
{
	// TODO Auto-generated destructor stub
}

template <class Type>
int CTECArray<Type>:: getSize()
{
	return this-> size;
}

template <class Type>
Type* CTECArray<Type>:: get(int position)
{
	// Bounds check for size and negtive
	if(position < size || position < 0)
	{
		return nullptr;
	}
	else
	{
		//Inclusive cause I am inside the bounds guaranteed
		ArrayNode<Type> * current = head;
		for ( int spot = 0; spot <= position; spot ++)
		{

				if (spot != position)
				{
					current = current -> getNext();
				}
				else
				{
					return current->getValue();
				}
		}
	}
}

template <class Type>
 void CTECArray<Type>:: set(int position,Type value)
{

}
