#include <iostream>
#include <memory>
#include <sstream>
#include <string>

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

std::string Square::toString() {
    std::stringstream ss;

    if (this->piece) {
        ss << this->piece->toString();
    } else {
        ss << "X";
    }
    ss << " (" << this->row << ", " << this->col << ")";
    return ss.str();
}
