/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: bsha6756
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_

#include "ArrayNode.h"

template<class Type>
class CTECList {
public:


	CTECList();
	~CTECList();
	int getSize();
	void addToFront(const Type& value);
	void addToEnd(const Type& value);
	void addAtIndex(int index, const Type& value);
	Type getFront();
	Type getEnd();
    void swap(int indexOne, int indexTwo);

	Type getFromIndex(int index);
	Type removeFromFront();
	Type removeFromEnd();
	Type removeFromIndex(int index);
	Type set(int index, const Type& value);
    int indexOf(Type searchValue);
    void selectionSort();

private :
	int size;
	ArrayNode<Type> * head;
	ArrayNode<Type> * end;

	void calculateSize();
};



#endif /* MODEL_CTECLIST_H_ */
