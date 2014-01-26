/* 
 * File:   101044044HW05P01.cpp
 * Author: Samet Sait Talayhan
 * 
 * Created on November 14, 2013, 10:51 PM
 */

#include "101044044HW05P01.h"
#include <iostream>
#include <string>

using namespace std;

Planet::Planet() {
}

Planet::Planet(const Planet& orig) {
}

Planet::~Planet() {
}
// Setters and getters implementations
void Planet::SetWeight(int weight) {
    this->weight = weight;
}

int Planet::GetWeight() const {
    return weight;
}

void Planet::SetDistance(double distance) {
    this->distance = distance;
}

double Planet::GetDistance() const {
    return distance;
}

void Planet::SetDiameter(double diameter) {
    this->diameter = diameter;
}

double Planet::GetDiameter() const {
    return diameter;
}

void Planet::SetName(string name) {
    this->name = name;
}

string Planet::GetName() const {
    return name;
}
// comparisons operator implementations
bool Planet::operator ==(const Planet& leftPlanet) const
{
    return (name == leftPlanet.name) && (diameter == leftPlanet.diameter) &&
           (distance == leftPlanet.distance) && (weight == leftPlanet.weight);
}

bool Planet::operator !=(const Planet& leftPlanet) const
{
    return !(*this == leftPlanet);
}

bool Planet::operator <(const Planet& leftPlanet) const
{
    return weight < leftPlanet.weight ? true : false;
}

bool Planet::operator >=(const Planet& leftPlanet) const
{
    return !(*this < leftPlanet);
}

bool Planet::operator >(const Planet& leftPlanet) const
{
    return weight > leftPlanet.weight ? true : false;
}

bool Planet::operator <=(const Planet& leftPlanet) const
{
    return !(*this > leftPlanet);
}
// Prefix and postfix increment operator implementation
Planet Planet::operator ++()
{
    diameter++;
    return *this;
}

Planet Planet::operator ++(int ignoreMe)
{
    Planet temp;
    temp.diameter = diameter;
    
    diameter++;
    return temp;
}

// Prefix and postfix decrement operator implementation
Planet Planet::operator --()
{
    diameter--;
    return *this;
}

Planet Planet::operator --(int ignoreMe)
{
    Planet temp;
    temp.diameter = diameter;
    
    diameter--;
    return temp;
}

// operator overloading
ostream& operator <<(ostream& outputStream, Planet& thePlanet)
{
    outputStream << "Planet name: "<< thePlanet.name <<endl;
    outputStream << "Planet diameter: "<< thePlanet.diameter << endl;
    outputStream << "Planet distance: "<< thePlanet.distance << endl;
    outputStream << "Planet weight: "<< thePlanet.weight << endl;

    return outputStream;
}

istream& operator >>(istream& inputStream, Planet& thePlanet)
{
    cout<<"Enter Planet name: "<< endl;
    inputStream >> thePlanet.name;
    cout<<"Enter Planet diameter: "<< endl;
    inputStream >> thePlanet.diameter;
    cout<<"Enter Planet distance: "<< endl;
    inputStream >> thePlanet.distance;
    cout<<"Enter Planet weight: "<< endl;
    inputStream >> thePlanet.weight;

    return inputStream;
}