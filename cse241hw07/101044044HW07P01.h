/*
 * List.h
 *
 *  Created on: 19 Dec 2013
 *      Author: talayhan
 */

#ifndef LIST_H_
#define LIST_H_

namespace Talayhan {

template< class T>
class List {
public:
	virtual void addElement(const T& element) = 0;
	virtual bool removeElement(const T& element) = 0;
	virtual int searchElement(const T& element) = 0;
	virtual int numberOfElements(void) = 0;
	virtual T& at(int index) = 0;
};

} /* namespace Talayhan */
#endif /* LIST_H_ */
