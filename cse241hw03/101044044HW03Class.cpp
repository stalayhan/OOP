/*
 * BoardPosition.cpp
 *
 *  Created on: Oct 25, 2013
 *      Author: Samet Sait Talayhan
 */

#include "BoardPosition.h"
#include <iostream>

#define HEIGHT_OF_CHESS_BOARD 8

using std::cout;
namespace Talayhan {

BoardPosition::BoardPosition() {
	// TODO Auto-generated constructor stub
	this->column = '\0';
	this->row = 0;
	++count;

}
BoardPosition::BoardPosition(char column, int row){
	// check constructor arguments
	setRow(row);
	setColumn(column);
	++count;
}

void BoardPosition::setRow(int newRow)
{
	if(newRow > 9 || newRow < 0)
		cout << "Error for setting up row\n";
	else
		this->row = newRow;
}

void BoardPosition::setColumn(char newColumn)
{
	if(newColumn > 'H' || newColumn < 'A')
		cout << "Error for setting up column\n";
	else
		this->column = newColumn;
}

bool BoardPosition::isWhite() const
{
	// if row is odd number and column equals to
	// any one of below character return true, otherwise false.
	if (getRow() % 2 == 0) {
		if (column == 'A' || column == 'C' ||
			column == 'E' || column == 'G') {
			return true;
		}else{
			return false;
		}
	}else{
		if (column == 'B' || column == 'D' ||
			column == 'F' || column == 'H') {
			return true;
		}else{
			return false;
		}
	}
}

void BoardPosition::input(char column, int row)
{
	setColumn(column);
	setRow(row);
}

void BoardPosition::output() const
{
	cout << getColumn() << getRow() << "\n";
}

} /* namespace Talayhan */
