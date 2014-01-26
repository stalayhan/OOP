/*
 * ChessBoard.h
 *
 *  Created on: Nov 1, 2013
 *      Author: Samet Sait Talayhan
 */

#ifndef CHESSBOARD_H_
#define CHESSBOARD_H_

#include <vector>
#include "101044044HW04P03.h"
using std::vector;

namespace Talayhan {

class ChessBoard {
public:
	ChessBoard();

	bool moveBlack(const BoardPosition &source, const BoardPosition &dest);
	bool moveWhite(const BoardPosition &source, const BoardPosition &dest);

	inline static int totalNumberOfMoves(){ return countOfMoves; }

private:
	vector<ChessPiece> whitePieces;
	vector<ChessPiece> blackPieces;
	int turn; // if turn equals 1, turn = white, other turns black
	static int countOfMoves;
	int board[8][8];
};

} /* namespace Talayhan */
#endif /* CHESSBOARD_H_ */
