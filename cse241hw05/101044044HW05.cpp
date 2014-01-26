/* 
 * File:   101044044HW05.cpp
 * Author: Samet Sait Talayhan
 *
 * Created on November 14, 2013, 10:50 PM
 */
#include <iostream>
#include "101044044HW05P02.h"
#include "101044044HW05P01.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

	Planet a;
	a.SetName("Planet A");
	a.SetWeight(12);
	a.SetDistance(4031.589);
	a.SetDiameter(309.123);
	cout << a << endl;


	Planet b;
	b.SetName("Planet B");
	b.SetWeight(98);
	b.SetDistance(876.987);
	b.SetDiameter(609.123);
	cout << b << endl;

	b = a;
	cout << b << endl;

	StarSystem ares("Kunt Star");
	cout << ares << endl;
	ares += b;
	cout << ares << endl;

	ares += a;
	cout << ares << endl;

    return 0;
}

