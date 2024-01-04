#ifndef SQUARE_H
#define SQUARE_H

#include "Piece.h"
#include <memory>

class Square {
public:
    Square();
    friend std::ostream& operator<<(std::ostream& os, const Square& square);
private:
    std::unique_ptr<Piece> piece;
};

#endif
