#include <iostream>

#include "ChessBoard.h"
#include "Square.h"

ChessBoard::ChessBoard() {

}

void ChessBoard::initializeBoard() {
    
}

void ChessBoard::displayBoard() {
    for (const auto &row : squares) {
        for (const Square &square : row) {
            std::cout << square << ' ';
        }
        std::cout << std::endl;
    }
}
