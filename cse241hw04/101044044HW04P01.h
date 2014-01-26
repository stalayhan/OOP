/*
 * BoardPosition.h
 *
 *  Created on: Oct 25, 2013
 *      Author: Samet Sait Talayhan
 *
 */

#ifndef BOARDPOSITION_H_
#define BOARDPOSITION_H_

namespace Talayhan {

class BoardPosition {
public:
	BoardPosition();
	BoardPosition(char column, int row);

	//setters and getters /implemented
	int getRow() const { return row; }
	char getColumn() const{ return column; }
	void setRow(int newRow);
	void setColumn(char newColumn);

	void output() const;
	void input(char column, int row);
	static int totalNumberOfBoardPos() { return count; }
	bool isWhite() const; //has been implemented

private:
	int row;
	char column;
	static int count;
};

} /* namespace Talayhan */
#endif /* BOARDPOSITION_H_ */
