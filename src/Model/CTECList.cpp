/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: bsha6756
 */

#include "CTECList.h"

#include <assert.h>

template<class Type>
CTECList<Type>::CTECList() {
	this->size =0;
	this->head = nullptr;
	this->end = nullptr;
}

template <class Type>
CTECList<Type>::~CTECList() {

}

template <class Type>
int CTECList<Type>::getSize()
{

}
template <class Type>
void CTECList<Type>::addToFront(const Type& value)
{

}
template <class Type>
void CTECList<Type>::addToEnd(const Type& value)
{

}
template <class Type>
void CTECList<Type>::addAtIndex(int index, const Type& value)
{

}

template <class Type>
Type CTECList<Type>::getFront()
{

}

template <class Type>
Type CTECList<Type>::getEnd()
{

}


template<class Type>
Type CTECList<Type>:: removeFromFront()
{
	assert(this ->size > 0);
	Type thingToRemove;
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = this -> head ->getNext();

	thingToRemove = this->head->getValue();
	delete this->head;
	return thingToRemove;
}


// calclates the size of the list
template<class Type>
Type CTECList<Type>::calculateSize()
{
	assert(size >= 0);

	ArrayNode<Type> * counterPointer = head;
	int count = 1;

	if(counterPointer==nullptr)
	{
		this->size =0;
		return;
	}
	else
	{
		count ++;
		while ( counterPointer -> getNext() != nullptr)
			{
				counterPointer = counterPointer ->getNext();
				count++;
			}
	this ->size=count;
	}

}
template <class Type>
Type CTECList<Type>::getFromIndex(int index)
{


}




template <class Type>
Type CTECList<Type>::removeFromEnd()
{
	// loop over size
	//or
	//loop until -> getNext() == nullptrv

}

template <class Type>
Type CTECList<Type>::removeFromIndex(int index)
{
	Type returnValue;
	assert(size > 0 );
	assert(index >= 0);
	assert(index < size);
	assert(size > 0 && index >= 0 && index < size);

}

template <class Type>
Type CTECList<Type>::set(int index, const Type& value)
{

}
