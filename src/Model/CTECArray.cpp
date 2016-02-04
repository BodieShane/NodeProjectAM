/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: bsha6756
 */

#include "CTECArray.h"
using namespace std;

template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	head = nullptr;

	if (size <= 0)
	{
		cerr << "Impossible!" << endl;
		return ;
	}

	for (int index = 0; index < size; index++)
	{
		if(head != nullptr)
		{//We have more then one ArrayNode.
			ArrayNode<Type> nextNode;
			nextNode.setNext(head);
			head = &nextNode;

		}
		else
		{	//This is the first node in the array
			ArrayNode<Type> temp;
			head = &temp;

		}
	}

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
	if(position >= size || position < 0)
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
	if(position >= size || position < 0)
		{
			cerr <<"dont't do this"<< endl;
		}
		else
		{
			for(int spot = 0; spot <= position; spot++)
			{

			ArrayNode<Type> * current = head;
			if ( spot != position)
						{
							current = current -> getNext();
						}
						else
						{
							return current->getValue();
			}		}
		}
}
