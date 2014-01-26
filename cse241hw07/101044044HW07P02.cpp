/*
 * SortedList.cpp
 *
 *  Created on: 19 Dec 2013
 *      Author: talayhan
 */

#include "101044044HW07P02.h"
#include <iostream>

using std::ostream;
using std::cout;
using std::endl;
namespace Talayhan {

template< class T>
SortedList<T>::SortedList():size(0),capacity(10) {
	// TODO Auto-generated constructor stub
	// allocation process
	sortedArray = new T[capacity];
}

template< class T>
SortedList<T>::SortedList(int newCapacity):size(0),capacity(newCapacity) {
	// TODO Auto-generated constructor stub
	// allocation process
	sortedArray = new T[capacity];
}

template< class T>
void SortedList<T>::addElement(const T& element){
	if (size >= capacity) {
		capacity = 2* capacity;

		T *newArray = new T[capacity];
		for (int i = 0; i < getSize(); ++i) {
			newArray[i] = sortedArray[i];
		}
		delete [] sortedArray;
		sortedArray = newArray;
		sortedArray[size] = element;
		++size;
		sortList();
	}
	else {
		sortedArray[size] = element;
		++size;
		sortList();
	}
}

template< class T>
bool SortedList<T>::removeElement(const T& element){

	int check = searchElement(element);
	if(check != -1)
	{
		for (int i = check; i < getSize(); ++i) {
			sortedArray[i] = sortedArray[i+1];
		}
		--size;
		sortList();
		return true;
	}
	else {
		// element is not in the array.
		return false;
	}

	return true;
}

template<class T>
int SortedList<T>::searchElement(const T& element){
	for (int i= 0; i < size; ++i) {
		if (sortedArray[i] == element ) {
			return i;
		}
	}
	return -1;
}

template<class T>
ostream& operator <<(ostream& out, const SortedList<T>& list)
{
	for (int i = 0; i < list.getSize(); ++i)
	{
		out << list.getSortedArray()[i]  <<" ";
	}
	out <<"\n";
	return out;
}

template<class T>
void SortedList<T>::sortList(void) const{
	for (int i = 0; i < getSize(); ++i) {
		for (int j = 0; j < getSize()-1; ++j) {
			if ( sortedArray[j] > sortedArray[j+1] )
			{
				T temp = sortedArray[j+1];
				sortedArray[j+1] = sortedArray[j];
				sortedArray[j] = temp;
			}
		}
	}

}

template<class T>
int SortedList<T>::numberOfElements(void){

	return getSize();
}

template<class T>
T& SortedList<T>::at(int index){
	return sortedArray[index];
}

template<class T>
int SortedList<T>::getCapacity() const {
	return capacity;
}

template<class T>
void SortedList<T>::setCapacity(int capacity) {
	this->capacity = capacity;
}

template<class T>
int SortedList<T>::getSize() const {
	return size;
}

template<class T>
void SortedList<T>::setSize(int size) {
	this->size = size;
}

template<class T>
T* SortedList<T>::getSortedArray() const {
	return sortedArray;
}

template<class T>
void SortedList<T>::setSortedArray(T* sortedArray) {
	this->sortedArray = sortedArray;
}

} /* namespace Talayhan */
