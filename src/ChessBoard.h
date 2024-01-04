#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <array>

#include "Square.h"

class ChessBoard {
public:
    ChessBoard();
    void initializeBoard();
    void displayBoard();

private:
    std::array<std::array<Square, 8>, 8> squares;
};

#endif
