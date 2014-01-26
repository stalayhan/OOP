//============================================================================
// Name        : main.cpp
// Author      : Samet Sait Talayhan
// Version     : 0.001
// Copyright   : The MIT License (MIT)
//
//	Copyright (c) 2013 samet.talayhan@gmail.com Created on: Dec 1, 2013, Cse241 HW06
//
//	Permission is hereby granted, free of charge, to any person obtaining a copy
//	of this software and associated documentation files (the "Software"), to deal
//	in the Software without restriction, including without limitation the rights
//	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//	copies of the Software, and to permit persons to whom the Software is
//	furnished to do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in
//	all copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//	THE SOFTWARE.
//
// Description : CSE241_HW3 in C++, Ansi-style
//============================================================================

#include "101044044HW06P05.h"
#include "101044044HW06P06.h"
#include "101044044HW06P07.h"
#include "101044044HW06P08.h"
#include "101044044HW06P03.h"
#include <iostream>

using namespace Talayhan;
using namespace std;

int Software::aliveObjectNumberSoftware = 0;
int SystemSoftware::aliveObjectNumbersSystem = 0;
int ComputerProgrmmingTools::aliveObjectNumbersComp = 0;
int ApplicationSoftware::aliveObjectNumberApp = 0;
int Firmware::aliveObjectNumbersFirmware = 0;
int Compilers::aliveObjectNumbersComp = 0;
int EditingSoftware::aliveObjectNumbersEdit = 0;
int LegalSoftware::aliveObjectNumbersLegal= 0;

int main(int argc, char **argv) {
	Software soft1;
	SystemSoftware sys1;
	{
		ComputerProgrmmingTools comp1;
		cout <<"First Paranthesis Software Class alive object numbers : "
				<< soft1.getAliveObjectNumber() <<endl;
	}
	cout <<"Software Class alive object numbers : "
			<< soft1.getAliveObjectNumber() <<endl;

	ComputerProgrmmingTools comp1;
	Compilers compi1;

	cout <<"Software Class alive object numbers : "
			<< soft1.getAliveObjectNumber() << endl;

	// create 3 level class objects
	Firmware firm1;
	EditingSoftware edit1;
	LegalSoftware leg1;

	cout <<"Software Class alive object numbers : "
			<< soft1.getAliveObjectNumber()	<<endl;
	{
		ApplicationSoftware app1;
		cout <<"ApplicationSoftware Class alive object numbers : "
					<< app1.getAliveObjectNumber() << endl;
	}
	cout <<"ComputerProgrammingTools Class alive object numbers : "
			<< comp1.getAliveObjectNumber() << endl;


	return 0;
}




