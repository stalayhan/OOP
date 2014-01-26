/*
 * ChessPiece.h
 *
 *  Created on: Nov 1, 2013
 *      Author: Samet Sait Talayhan
 */

#ifndef CHESSPIECE_H_
#define CHESSPIECE_H_

#include <string>
#include "101044044HW04P01.h"

using std::string;

namespace Talayhan {

#define BLACK 0
#define WHITE 1

class ChessPiece {
public:
	ChessPiece();

	bool canMove(const char &column, const int &row) const;

	// getters and setters for data members.
	const string& getPieceName() const;
	void setPieceName(const string& pieceName);
	BoardPosition getPiecePosition() const;
	void setPiecePosition(BoardPosition piecePosition);

private:
	string pieceName;
	BoardPosition piecePosition;
	int color; //black is 0, white is 1.
};

} /* namespace Talayhan */
#endif /* CHESSPIECE_H_ */
