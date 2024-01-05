#ifndef PIECE_H
#define PIECE_H

#include <memory>
#include <string>
#include <vector>

#include "../Square.h"

class Piece {
public:
    Piece(std::shared_ptr<Square> square);
    virtual bool canMoveTo(std::shared_ptr<Square> square) = 0;

    virtual std::string toString() = 0;
protected:
    std::shared_ptr<Square> square;
};

#endif
