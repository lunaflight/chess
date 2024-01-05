#ifndef PIECE_H
#define PIECE_H

#include <memory>
#include <string>
#include <vector>

class Square;

class Piece {
public:
    virtual std::vector<std::shared_ptr<Square>> getValidMoves() = 0;

    friend std::ostream& operator<<(std::ostream& os, const Piece& piece);
private:

};

#endif
