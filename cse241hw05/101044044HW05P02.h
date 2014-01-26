/* 
 * File:   101044044HW05P02.h
 * Author: Samet Sait Talayhan
 *
 * Created on November 15, 2013, 12:34 AM
 */

#ifndef STARSYSTEM_H
#define	STARSYSTEM_H

#include "101044044HW05P01.h"
#include <iostream>
#include <string>
using namespace std;

class StarSystem {
public:
    StarSystem();
    StarSystem(int);
    StarSystem(string);
    StarSystem(const StarSystem& orig);
    virtual ~StarSystem();
    //seter and getter for main star
    string getStarName() const {return starName;}
    void setStarName(string newStarName) { starName = newStarName; }
    //getters and setters for size, capacity
    int getSize() const { return size; }
    int getCapacity() const { return capacity; }
    // += Operator Overloading
    StarSystem& operator +=(const Planet& rightOp);
    StarSystem& operator -=(const Planet& rightOp); // not implemented yet.
    Planet& operator [](int index);
    //increase capacity function
    bool increaseCapacity();
    bool isFull() const { return size == capacity ? true : false;}
    friend ostream& operator <<(ostream& outputStream, StarSystem& op);
    StarSystem& operator =(const StarSystem& op);
private:
    Planet *planetsArray;
    int size;
    int capacity;
    string starName;
};

#endif	/* STARSYSTEM_H */

