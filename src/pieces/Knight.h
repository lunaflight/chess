#ifndef KNIGHT_H
#define KNIGHT_H

#include "Piece.h"

class Knight : public Piece {
public:
    Knight(std::shared_ptr<Square> square);

    bool canMoveTo(std::shared_ptr<Square>) override;
};

#endif
