#include <iostream>
#include <memory>

#include "ChessBoard.h"
#include "Square.h"
#include "pieces/Knight.h"

ChessBoard::ChessBoard() {
    for (int i = 0; i < CHESSBOARD_SIZE; ++i) {
        for (int j = 0; j < CHESSBOARD_SIZE; j++) {
            squares[i][j] = std::make_shared<Square>(i, j);
        }
    }
}

void ChessBoard::initialiseWithPieces() {
    std::shared_ptr<Knight> knight = std::make_shared<Knight>(squares[0][1]);
    squares[0][1]->placePiece(knight);
}

std::shared_ptr<Square> ChessBoard::getSquare(int row, int col) {
    return squares[row][col];
}

void ChessBoard::displayBoard() {
    for (const auto &row : squares) {
        for (const std::shared_ptr<Square> &square : row) {
            std::cout << square->toString() << ' ';
        }
        std::cout << std::endl;
    }
}
