#include <iostream>
#include <memory>

#include "ChessBoard.h"
#include "Square.h"

ChessBoard::ChessBoard() {
    for (int i = 0; i < CHESSBOARD_SIZE; ++i) {
        for (int j = 0; j < CHESSBOARD_SIZE; j++) {
            squares[i][j] = std::make_shared<Square>();
        }
    }

    for (int i = 0; i < CHESSBOARD_SIZE; ++i) {
        for (int j = 0; j < CHESSBOARD_SIZE; j++) {
            if (i - 1 >= 0)
                squares[i][j]->setUp(squares[i - 1][j]);
            if (i + 1 < CHESSBOARD_SIZE)
                squares[i][j]->setDown(squares[i + 1][j]);
            if (j - 1 >= 0)
                squares[i][j]->setLeft(squares[i][j - 1]);
            if (j + 1 < CHESSBOARD_SIZE)
                squares[i][j]->setRight(squares[i][j + 1]);
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
