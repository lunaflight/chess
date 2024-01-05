#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <array>

#include "Square.h"

constexpr int CHESSBOARD_SIZE = 8;

class ChessBoard {
public:
    ChessBoard();
    void initializeBoard();
    void displayBoard();

private:
    std::array<std::array<std::shared_ptr<Square>, CHESSBOARD_SIZE>, CHESSBOARD_SIZE> squares;
};

#endif
