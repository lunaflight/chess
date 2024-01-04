#include <iostream>

#include "Square.h"

Square::Square() : piece(nullptr) { 
}

std::ostream& operator<<(std::ostream& os, const Square& square) {
    if (square.piece) {
        // os << *(square.piece);
    } else {
        os << "X";
    }
    return os;
}
