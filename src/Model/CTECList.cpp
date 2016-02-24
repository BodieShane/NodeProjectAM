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

template <class Type>
Type CTECList<Type>::getFromIndex(int index)
{


}

template <class Type>
Type CTECList<Type>::removeFromFront()
{
	Type returnValue;

	assert(size > 0);
	//create a pointer to what is after head
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();

	returnValue =this-> head -> getValue();

	delete this-> head;
	head =newHead;
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

}

template <class Type>
Type CTECList<Type>::set(int index, const Type& value)
{

}
