#include <iostream>

#include "Square.h"

Square::Square(int row, int col) : piece(nullptr), row(row), col(col) {}

int Square::getRow() {
    return row;
}

int Square::getCol() {
    return col;
}

std::ostream& operator<<(std::ostream& os, const Square& square) {
    if (square.piece) {
        // os << *(square.piece);
    } else {
        os << "X (" << square.row << ", " << square.col << ")";
    }
    return os;
}
