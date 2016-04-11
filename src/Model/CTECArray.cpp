/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: bsha6756
 */

#include "CTECArray.h"
#include <assert.h>
using namespace std;

template<class Type>
CTECArray<Type>::CTECArray(int size) {
	this->size = size;
	this->head = nullptr;

	assert(size > 0);
	for (int index = 0; index < size; index++) {
		if (head != nullptr)
		{ //We have more then one ArrayNode.
			ArrayNode<Type> * nextNode = new ArrayNode<Type>();
			nextNode->setNext(head);
			head = nextNode;

		}
		else {	//This is the first node in the array
			ArrayNode<Type> * first = new ArrayNode<Type>();
			head = first;

		}
	}
}





template<class Type>
CTECArray<Type>::~CTECArray() {
	ArrayNode<Type> * deleteMe = head;
	for (int index = 0; index < size; index++) {
		if (deleteMe->getNext() != nullptr) {
			head = deleteMe->getNext();
			deleteMe->setNext(nullptr);
		}
		delete deleteMe->getNext();
		deleteMe = head;
	}
	delete head;
}

template<class Type>
int CTECArray<Type>::getSize() {
	return this->size;
}

template<class Type>
Type CTECArray<Type>::get(int position) {
	assert(position < size && position >= 0);

	ArrayNode<Type> * current = head;
	for (int spot = 0; spot <= position; spot++)
	{



		if (spot != position)
		{
			current = current->getNext();
		}
		else
		{
			return current -> getValue();

		}



	}
    return current -> getValue(); 

}
/*
  1) Sttert size is greter then 0.
 2) Declare and init valid returvaiable
 3)Reference to head and loop
 4) if there retrun index else go to next
 5) return index
 */


template<class Type>
int CTECArray<Type> :: indexOf(Type sarchValue)
{
    assert(this->sie>0);
    
    int indexNotFound = -1;
    
    ArrayNode<Type> * current = head;
  
    {
        current = current -> getNext();
    }
    
    for(int index = 0; index < this -> size; index++)
    {
        if (current ->getValue() == sarchValue)
        {
            return index;
        }
        else
        {
            current = current -> getNext();
        }
    }
    
    return indexNotFound;
}
template < class Type>
void CTECArray<Type> ::swap(int indexOne,int indexTwo)
{
    assert(indexOne< size&& indexTwo < size);
    ArrayNode<Type> * first = get(indexOne);
    ArrayNode<Type> * second = get(indexTwo);
    ArrayNode<Type> * temp = new ArrayNode<Type>();
    
    temp ->setValue(first->getValue());
    first->setValue(second->getValue());
    second ->setValue(temp->getValue());
    
    delete temp;
    
}
template < class Type>
void CTECArray::<Type>:: selectionSort()
{
    int innerLoop, outerLoop;
    for (outerLoop = 0; outerLoop < this-> size()-1 ; outerLoop++)
    {
        int selectedMinimum = outerLoop;
        for(innerLoop = outerLoop +1 ; innerLoop < size; innerLoop++)
        {
            if (getFromIndex(innerLoop) <get(selectedMinimum))
            {
                selectedMinimum = innerLoop;
            }
        }
        if(selectedMinimum != outerLoop);
        swap(outerLoop, selectedMinimum);
    }
}

template <class Type>
int CTECArray<Type> :: nextIndexOf(int startingIndex, Type searchValue)
{
    assert (this ->size > 0);
    assert(startingIndex >=  0 && startingIndex < this -> size);
    
    int indexNotFound = -1;
    
    ArrayNode<Type> * current = head;
      for (int index = 0; index < startingIndex; index++)
      {
          current = current ->getNext();
      }
    for(int index = 0; index < this -> size; index++)
    {
        if (current ->getValue() == searchValue)
        {
            return index;
        }
        else
        {
            current = current -> getNext();
        }
    }
    return indexNotFound;
}


template<class Type>
void CTECArray<Type>::set(int position, const Type& value) {

	assert(position < size && position >= 0);
	ArrayNode<Type> * current = head;
	for (int spot = 0; spot <= position; spot++) {


		if (spot != position) {
			current = current->getNext();
		} else {
			current->setValue(value);

		}
	}

}
