#include <iostream>
#include <memory>

#include "ChessBoard.h"
#include "Square.h"

ChessBoard::ChessBoard() {
    for (int i = 0; i < CHESSBOARD_SIZE; ++i) {
        for (int j = 0; j < CHESSBOARD_SIZE; j++) {
            squares[i][j] = std::make_shared<Square>(i, j);
        }
    }
}

void ChessBoard::initializeBoard() {
    
}

void ChessBoard::displayBoard() {
    for (const auto &row : squares) {
        for (const std::shared_ptr<Square> &square : row) {
            std::cout << *square << ' ';
        }
        std::cout << std::endl;
    }
}
