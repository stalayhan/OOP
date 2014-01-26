/*
 * ChessPiece.cpp
 *
 *  Created on: Nov 1, 2013
 *      Author: Samet Sait Talayhan
 */

#include "101044044HW04P03.h"
#include <string>

namespace Talayhan {

ChessPiece::ChessPiece() {
	// TODO Auto-generated constructor stub

}

const string& ChessPiece::getPieceName() const {
	return pieceName;
}

void ChessPiece::setPieceName(const string& pieceName) {
	this->pieceName = pieceName;
}

BoardPosition ChessPiece::getPiecePosition() const {
	return piecePosition;
}

void ChessPiece::setPiecePosition(BoardPosition piecePosition) {
	this->piecePosition = piecePosition;
}
// newRow and newColumn kontrolü yapılmadı. 1
// 1. Should do check up.
// 2. Should divide functions each other.
bool ChessPiece::canMove(const char &newColumn, const int &newRow) const
{
	int compareRow = (getPiecePosition().getRow() - newRow);
	int compareColumn = static_cast<int>(getPiecePosition().getColumn()
						- newColumn);
	//*Piyonda açık var 1 adım geriyede gidebilir.
	if(getPieceName() == "Piyon"){
		// columnlar esit ve satırlar arasında 1 fark varsa, true
		if( ( compareRow == -1 || compareRow == 1) ){
			if( getPiecePosition().getColumn() == newColumn  ){
				return true;
			}else{
				return false;
			}
		}
		else{
			return false;
		}
	}
	else if(getPieceName() == "Kale"){
		//yatay hareket icin kontrol
		if( getPiecePosition().getRow() == newRow ){
			if( getPiecePosition().getColumn() <= 'H' &&
				getPiecePosition().getColumn() >= 'A' ){
			}
		}

	}
	else if(getPieceName() == "Vezir"){

	}
	else if(getPieceName() == "At"){
		// dusey olarak hareketi verify etmek için.
		if( (compareRow != 1) && (compareRow != -1) &&
			(compareRow != 2) && (compareRow != -2)){
			return false;
		}
		else {
			if ((compareColumn != 1) && (compareColumn != -1)
					&& (compareColumn != 2) && (compareColumn != -2)) {
				switch (compareRow) {
				case 1:
					if (compareColumn == 2 || compareColumn == -2)
						return true;
					break;
				case -1:
					if (compareColumn == 2 || compareColumn == -2)
						return true;
					break;
				case 2:
					if (compareColumn == 1 || compareColumn == -1)
						return true;
					break;
				case -2:
					if (compareColumn == 1 || compareColumn == -1)
						return true;
					break;
				default:
					return false;
					break;
				}
			}
		}
	}
	else if(getPieceName() == "Sah"){
		if( compareRow < -1 || compareRow > 1 ){
			return false;
		}
		else if( compareColumn < -1 || compareColumn > 1){
			return false;
		}
		else{
			if( compareColumn == 0 && compareRow == 0 ){
				return false;
			}
			else{
				return true;
			}
		}
	}
	else if(getPieceName() == "Fil"){

	}
}

} /* namespace Talayhan */
