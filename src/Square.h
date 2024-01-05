#ifndef SQUARE_H
#define SQUARE_H

#include <memory>
#include <string>

class Piece;

class Square {
public:
    Square(int row, int col);
    int getRow();
    int getCol();

    void placePiece(std::shared_ptr<Piece> piece);

    std::string toString();
private:
    std::shared_ptr<Piece> piece;
    int row;
    int col;
};

#endif
