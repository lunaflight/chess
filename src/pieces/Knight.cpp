#include "Knight.h"
#include "Color.h"
#include "Piece.h"
#include <cstdlib>
#include <memory>

Knight::Knight(Color color, std::shared_ptr<Square> square) : Piece(color, square) {}

bool Knight::canMoveTo(std::shared_ptr<Square> square) {
    const int rowDest = square->getRow();
    const int colDest = square->getCol();
    const int rowCurr = this->square->getRow();
    const int colCurr = this->square->getCol();

    const int rowDiff = std::abs(rowDest - rowCurr);
    const int colDiff = std::abs(colDest - colCurr);
    return (rowDiff == 1 && colDiff == 2) || (rowDiff == 2 && colDiff == 1);
}

std::string Knight::toString() {
    return "N";
}
