#ifndef SQUARE_H
#define SQUARE_H

#include "pieces/Piece.h"
#include <memory>

class Square {
public:
    Square(int row, int col);

    friend std::ostream& operator<<(std::ostream& os, const Square& square);
private:
    std::unique_ptr<Piece> piece;
    int row;
    int col;
};

#endif
