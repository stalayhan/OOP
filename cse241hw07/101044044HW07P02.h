/*
 * SortedList.h
 *
 *  Created on: 19 Dec 2013
 *      Author: talayhan
 */

#ifndef SORTEDLIST_H_
#define SORTEDLIST_H_

#include "101044044HW07P01.h"
#include <iostream>

using namespace std;
namespace Talayhan {

template<class T>
class SortedList: public Talayhan::List<T>
{
public:
	SortedList();
	SortedList(int newCapacity);
	virtual ~SortedList(){ delete [] sortedArray; };

	bool removeElement(const T& element);
	int searchElement(const T& element);
	void addElement(const T& element);
	int numberOfElements(void);
	T& at(int index);
	void sortList(void) const;
	int getCapacity() const;
	void setCapacity(int capacity);
	int getSize() const;
	void setSize(int size);
	T* getSortedArray() const;
	void setSortedArray(T* sortedArray);

private:
	int size;
	int capacity;
	T *sortedArray;
};

template< typename T>
ostream& operator <<(ostream& out, const SortedList<T>& list);

} /* namespace Talayhan */

#endif /* SORTEDLIST_H_ */
