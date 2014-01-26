/*
 * UniqueList.cpp
 *
 *  Created on: 20 Dec 2013
 *      Author: talayhan
 */

#include "101044044HW07P03.h"
#include <iostream>

using std::ostream;
using std::cout;
using std::endl;

namespace Talayhan {

template< class T>
UniqueList<T>::UniqueList():size(0),capacity(10) {
	// TODO Auto-generated constructor stub
	// allocation process
	uniqueArray = new T[capacity];
}

template< class T>
UniqueList<T>::UniqueList(int newCapacity):size(0),capacity(newCapacity) {
	// TODO Auto-generated constructor stub
	// allocation process
	uniqueArray = new T[capacity];
}

template< class T>
void UniqueList<T>::addElement(const T& element){
	int check = searchElement(element);
	if (check != -1) {
		//nothing to do
		cout << "This element is already exist in the list."<< endl;
	}
	else if ( size >= capacity ) {
		capacity = 2* capacity;

		T *newArray = new T[capacity];
		for (int i = 0; i < getSize(); ++i) {
			newArray[i] = uniqueArray[i];
		}
		delete [] uniqueArray;
		uniqueArray = newArray;
		uniqueArray[size] = element;
		++size;
	}
	else {
		uniqueArray[size] = element;
		++size;
	}
}

template< class T>
bool UniqueList<T>::removeElement(const T& element){

	int check = searchElement(element);
	if(check != -1)
	{
		for (int i = check; i < getSize(); ++i) {
			uniqueArray[i] = uniqueArray[i+1];
		}
		--size;
		return true;
	}
	else {
		// element is not in the array.
		return false;
	}

	return true;
}

template<class T>
int UniqueList<T>::searchElement(const T& element){
	for (int i= 0; i < size; ++i) {
		if (uniqueArray[i] == element ) {
			return i;
		}
	}
	return -1;
}

template<class T>
ostream& operator <<(ostream& out, const UniqueList<T>& list)
{
	for (int i = 0; i < list.getSize(); ++i)
	{
		out << list.getUniqueArray()[i]  <<" ";
	}
	out <<"\n";
	return out;
}

template<class T>
int UniqueList<T>::numberOfElements(void){

	return getSize();
}

template<class T>
T& UniqueList<T>::at(int index){
	return uniqueArray[index];
}

template<class T>
int UniqueList<T>::getCapacity() const {
	return capacity;
}

template<class T>
void UniqueList<T>::setCapacity(int capacity) {
	this->capacity = capacity;
}

template<class T>
int UniqueList<T>::getSize() const {
	return size;
}

template<class T>
void UniqueList<T>::setSize(int size) {
	this->size = size;
}

template<class T>
T* UniqueList<T>::getUniqueArray() const {
	return uniqueArray;
}

template<class T>
void UniqueList<T>::setUniqueArray(T* uniqueArray) {
	this->uniqueArray = uniqueArray;
}

} /* namespace Talayhan */
