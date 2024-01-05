#include <iostream>
#include <memory>

#include "Square.h"
#include "pieces/Piece.h"

Square::Square(int row, int col) : piece(nullptr), row(row), col(col) {}

int Square::getRow() {
    return row;
}

int Square::getCol() {
    return col;
}

void Square::placePiece(std::shared_ptr<Piece> piece) {
    this->piece = piece;
}

std::ostream& operator<<(std::ostream& os, const Square& square) {
    if (square.piece) {
        os << square.piece->toString();
    } else {
        os << "X";
    }
    os << " (" << square.row << ", " << square.col << ")";
    return os;
}
