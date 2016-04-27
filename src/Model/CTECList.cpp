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
CTECList<Type>::~CTECList()
{
	ArrayNode<Type> *current = head;

	for ( int deleteCount = 0; deleteCount < size; deleteCount++)
	{
		ArrayNode<Type>*temp = current;
		current = current ->getNext();
		head = current;
		delete temp;
	}


	delete head;
	head = nullptr;
	end = nullptr;
	size = 0;
}


////////////////////get's the Size/////////////////////////////
template <class Type>
int CTECList<Type>::getSize()
{

}
///////////////////////add's to the front//////////////////////
template <class Type>
void CTECList<Type>::addToFront(const Type& value)
{
	ArrayNode<Type>* newNode = new ArrayNode<Type>(value);
	head = newNode;
	calculateSize();

}
///////////////////////add's to end////////////////////////////
template <class Type>
void CTECList<Type>::addToEnd(const Type& value)
{
	ArrayNode<Type>* newNode = new ArrayNode<Type>(value);

	end->setNext(newNode);
	end = newNode;





	calculateSize();
}
//////////////////////add's at index///////////////////////////
template <class Type>
void CTECList<Type>::addAtIndex(int index, const Type& value)
{
	assert(index >= 0 && ! index > this -> size);
	if (index == 0)
	{
		this ->addToFront(value);
	}
	else if(index == this->size)
	{
		this->addToEnd(value);
	}
	else
	{
		ArrayNode<Type> * newNode = new ArrayNode<Type>(value);
		ArrayNode<Type> *  currentNode = this -> head;
		for ( int spot =0; spot < index; spot ++)
		{
			currentNode = currentNode ->getNext();
		}
		newNode->setNext(currentNode->getNext());
		currentNode->setNext(newNode);
		this->calculateSize();


	}
}
////////////////get's front////////////////////////////////////
template <class Type>
Type CTECList<Type>::getFront()
{
	Type ValueOfHead;
	assert(this-> size > 0);
	ArrayNode<Type> * newHead = new ArrayNode<Type>();

	ValueOfHead  = this->head->getValue();
	return ValueOfHead;
}

/////////////////////get's from end////////////////////////////

template <class Type>
Type CTECList<Type>::getEnd()
{
 assert(this -> size > 0);
 int count = 1;
 ArrayNode<Type> * counterPointer = head;

 if(counterPointer==nullptr)
 	{
 		this->size = 0;

 	}
 	else
 	{
 		count ++;
 		while ( counterPointer -> getNext() != nullptr)
 			{
 				counterPointer = counterPointer ->getNext();
 				count++;
 			}
 	this->size = count;
 	}
    return 0;
}


////////////////////remove's from the front/////////////////////

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


///////////////// calclates the size of the list////////////////
template<class Type>
void CTECList<Type>::calculateSize()
{
	assert(size >= 0);

	ArrayNode<Type> * counterPointer = head;
	int count = 1;

	if(counterPointer==nullptr)
	{
		this->size = 0;
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
	this->size = count;
	}

}

////////////// get's from the Index ////////////////////////////
template <class Type>
Type CTECList<Type>::getFromIndex(int index)
{
assert(this->size>0);

assert(index>= 0 && index <= size);

Type thingToRemove;
ArrayNode<Type> * previous, deleteMe, newNext;
if(index == 0)
{
	thingToRemove - removeFromFront();

}
else if (index == size -1)
{
	thingToRemove = removeFromEnd();
}
else
{
	for (int spot = 0; spot< index+ 1; spot ++)
	{

	}
	size--;
}
}

template < class Type>
void CTECList<Type>:: selectionSort()
{
    for ( int outerLoop = 0; outerLoop < this-> size -1; outerLoop ++)
    {
        int selectedMinimun = outerLoop ;
        for(int innerLoop = outerLoop +1; innerLoop < size; innerLoop ++)
        {
            if (getFromIndex(innerLoop) < getFromIndex(selectedMinimun))
            {
                selectedMinimun = innerLoop;
            }
        }
        if(selectedMinimun != outerLoop)
        {
            swap(selectedMinimun,outerLoop);
            
        }
    }
    }


template < class Type>
void CTECList<Type> ::swap(int indexOne,int indexTwo)
{
    assert(indexOne< size&& indexTwo < size);
    ArrayNode<Type> * first = getFromIndex(indexOne);
    ArrayNode<Type> * second = getFromIndex (indexTwo);
    ArrayNode<Type> * temp = new ArrayNode<Type>();
    
    temp ->setValue(first->getValue());
    first->setValue(second->getValue());
    second ->setValue(temp->getValue());
    
    delete temp;
    
}

///////////////Removes from the end/////////////////////////////
template <class Type>
Type CTECList<Type>::removeFromEnd()
{
	assert(this->size>0);
	//loop over size
	//or
	//loop until getNext()->getNext() == nullptr
	//grab the next to last node to point to nullptr
	//set the next to last nhode as end
	// delete the old last node
	//Before return the variable call calculateSize().
	// return value
	Type valueToRemove;
	if (size == 1)
	{
		valueToRemove=removeFromFront();
		end = nullptr;

		calculateSize();

		return valueToRemove;
	}


	ArrayNode<Type> * current = head;
	for(int spot =0; spot < size-1; spot ++)
	{
		current = current ->getNext();
	}

	ArrayNode<Type> * pointer = head;
	while (pointer-> getNext()-> getNext !=nullptr)
	{
		pointer= pointer-> getNext();
	}

	valueToRemove = current-> getNext() ->getValue();
	end = current;
	delete current->getNext();

	this->calculateSize();
	return valueToRemove;
}
/////////////////Removes from the index//////////////////
template <class Type>
Type CTECList<Type>::removeFromIndex(int index)
{
	Type returnValue;
	assert(size > 0 );
	assert(index >= 0);
	assert(index < size);
	assert(size > 0 && index >= 0 && index < size);

}

////////////////////////set the index ///////////////////
template <class Type>
Type CTECList<Type>::set(int index, const Type& value)
{

}
