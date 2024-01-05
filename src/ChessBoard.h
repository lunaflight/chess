#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <array>
#include <memory>

#include "Square.h"

constexpr int CHESSBOARD_SIZE = 8;

class ChessBoard {
public:
    ChessBoard();
    void initializeBoard();
    void displayBoard();
    std::shared_ptr<Square> getSquare(int row, int col);

private:
    std::array<std::array<std::shared_ptr<Square>, CHESSBOARD_SIZE>, CHESSBOARD_SIZE> squares;
};

#endif
