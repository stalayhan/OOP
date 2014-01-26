/* 
 * File:   101044044HW05P02.cpp
 * Author: Samet Sait Talayhan
 * 
 * Created on November 15, 2013, 12:34 AM
 */

#include "101044044HW05P02.h"
#include <string>

using namespace std;

StarSystem::StarSystem():size(0), capacity(10) {
	planetsArray = new Planet[capacity];
	starName = "Empty";
}
StarSystem::StarSystem(string name):size(0), capacity(10) {
	planetsArray = new Planet[capacity];
	starName = name;
}

StarSystem::StarSystem(int newCapacity):size(0), capacity(newCapacity) {
	planetsArray = new Planet[capacity];
}

StarSystem::StarSystem(const StarSystem& orig) {
	if (orig.getSize() > capacity)
	{
		delete [] planetsArray;
		capacity = 2 * capacity;
		planetsArray = new Planet[capacity];
	}

	for (int i = 0; i < orig.getSize(); ++i)
	{
		planetsArray[i] = orig.planetsArray[i];
	}
	size = orig.getSize();
}

StarSystem::~StarSystem() {
	delete [] planetsArray;
}

StarSystem& StarSystem::operator +=(const Planet& rightOp)
{
	if (size >= capacity)
	{
		StarSystem temp(*this);

		delete [] planetsArray;
		planetsArray = new Planet[capacity*2];

		for (int i = 0; i < getSize(); ++i)
		{
			planetsArray[i] = temp.planetsArray[i];
		}
		planetsArray[size] = rightOp;
		size++;
	}
	planetsArray[size] = rightOp;
	size++;
}
/*
StarSystem& operator -=(const Planet& rightOp)
{
	cout << "Not implemented Yet!\n";
}
*/
Planet& StarSystem::operator [](int index)
{
	return planetsArray[index];
}
ostream& operator <<(ostream& outputStream, StarSystem& op)
{
	outputStream << "Star name: "<< op.starName <<endl;
    outputStream << "Planets size:"<< op.size << endl;

    return outputStream;
}
StarSystem& StarSystem::operator =(const StarSystem& op)
{
	if (capacity != op.getCapacity() )
	{
		delete [] planetsArray;
		planetsArray = new Planet[op.capacity];
	}
	
	capacity = op.capacity;
	size = op.size;
	for (int i = 0; i < size; ++i)
	{
		planetsArray[i] = op.planetsArray[i];
	}

	return *this;
}