#ifndef PIECE_H
#define PIECE_H

#include <memory>
#include <string>
#include <vector>

class Square;

class Piece {
public:
    Piece(std::shared_ptr<Square> square);
    virtual std::vector<std::shared_ptr<Square>> getValidMoves() = 0;

    friend std::ostream& operator<<(std::ostream& os, const Piece& piece);
protected:
    std::shared_ptr<Square> square;
};

#endif
