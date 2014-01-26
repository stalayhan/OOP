/* 
 * File:   101044044HW05P01.h
 * Author: Samet Sait Talayhan
 *
 * Created on November 14, 2013, 10:51 PM
 */

#ifndef PLANET_H
#define	PLANET_H

#include <string>
using namespace std;

//all of functions implemented
class Planet {
public:
    Planet();   // default constructor
    Planet(const Planet& orig); // copy constructor
    virtual ~Planet();  // destructor
    // setters and getters
    void SetWeight(int weight);
    int GetWeight() const;
    void SetDistance(double distance);
    double GetDistance() const;
    void SetDiameter(double diameter);
    double GetDiameter() const;
    void SetName(string name);
    string GetName() const;
    
    // operator overloading
    friend istream& operator >>(istream& inputStream, Planet& thePlanet);
    friend ostream& operator <<(ostream& outputStream, Planet& thePlanet);
    // comparing operators overloading
    bool operator ==(const Planet& leftPlanet) const;
    bool operator !=(const Planet& leftPlanet) const;
    bool operator <(const Planet& leftPlanet) const;
    bool operator >(const Planet& leftPlanet) const;
    bool operator >=(const Planet& leftPlanet) const;   
    bool operator <=(const Planet& leftPlanet) const;
    
    // increase and decrease operator overloading
    Planet operator ++(); // prefix operator
    Planet operator ++(int ignoreMe); // postfix operator
    Planet operator --(); // prefix operator
    Planet operator --(int ignoreMe); // postfix operator
private:
    string name;
    double diameter;
    double distance;
    int weight;
};

#endif	/* PLANET_H */

