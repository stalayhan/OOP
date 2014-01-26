/*
 * UniqueList.h
 *
 *  Created on: 20 Dec 2013
 *      Author: talayhan
 */

#ifndef UNIQUELIST_H_
#define UNIQUELIST_H_

#include "101044044HW07P01.h"
#include <iostream>

namespace Talayhan {

template<class T>
class UniqueList: public Talayhan::List<T> {
public:
	UniqueList();
	UniqueList(int newCapacity);
	virtual ~UniqueList(){ delete [] uniqueArray; };
	bool removeElement(const T& element);
	int searchElement(const T& element);
	void addElement(const T& element);
	int numberOfElements(void);
	T& at(int index);

	int getCapacity() const;
	void setCapacity(int capacity);
	int getSize() const;
	void setSize(int size);
	T* getUniqueArray() const;
	void setUniqueArray(T* uniqueArray);

private:
	int size;
	int capacity;
	T *uniqueArray;
};

template< typename T>
std::ostream& operator <<(std::ostream& out, const UniqueList<T>& list);

} /* namespace Talayhan */
#endif /* UNIQUELIST_H_ */
