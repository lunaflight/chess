#ifndef KNIGHT_H
#define KNIGHT_H

#include "Piece.h"
#include <string>

class Knight : public Piece {
public:
    Knight(std::shared_ptr<Square> square);

    bool canMoveTo(std::shared_ptr<Square>) override;
    std::string toString() override;
};

#endif
