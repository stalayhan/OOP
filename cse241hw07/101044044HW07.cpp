//============================================================================
// Name        : CSEHW7.cpp
// Author      : Talayhan Samet Sait
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "101044044HW07P03.h"
#include "101044044HW07P02.h"
#include "101044044HW07P02.cpp"
#include "101044044HW07P03.cpp"	//for pure virtual functions.

using namespace Talayhan;
using namespace std;

int main() {
	SortedList<int> list1;

	list1.addElement(10);

	cout << "Array size: " << list1.getSize() << endl;
	cout << "Array capacity: " << list1.getCapacity() << endl;

	cout << list1 << endl;

	int input;
	do{
		cout << "Add integer to the array(-1 exit): ";
		cin >> input;
		list1.addElement(input);
		cout << "Size:" << list1.getSize() <<", Capacity: " << list1.getCapacity()<<endl;
	}while(input != -1);


	cout<< "Enter a number: ";
	int number;
	cin >> number;


	cout << number <<" is in the array?: ";
	if (list1.searchElement(number) != -1) {
		cout << "True!"<<endl;
	}else {
		cout << "False!"<<endl;
	}

	cout<< list1;


	do {
		cout << "Remove integer to the array(-1 exit): ";
		cin >> input;
		list1.removeElement(input);
		cout << list1;
		cout << "Size:" << list1.getSize() <<", Capacity: " << list1.getCapacity() << endl;
	} while (input != -1);


	UniqueList<int> uniqList;

	do {
		cout << "Add integer to the array(-1 exit): ";
		cin >> input;
		uniqList.addElement(input);
		cout << "Size:" << uniqList.getSize() << ", Capacity: "
				<< uniqList.getCapacity() << endl;
		cout << uniqList;
	} while (input != -1);




	return 0;
}
