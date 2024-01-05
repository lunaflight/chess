#include <iostream>

#include "Square.h"

Square::Square(int row, int col) : piece(nullptr), row(row), col(col) {}

std::ostream& operator<<(std::ostream& os, const Square& square) {
    if (square.piece) {
        // os << *(square.piece);
    } else {
        os << "X (" << square.row << ", " << square.col << ")";
    }
    return os;
}
