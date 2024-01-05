#ifndef SQUARE_H
#define SQUARE_H

#include <memory>

class Piece;

class Square {
public:
    Square(int row, int col);

    int getRow();
    int getCol();
    friend std::ostream& operator<<(std::ostream& os, const Square& square);
private:
    std::shared_ptr<Piece> piece;
    int row;
    int col;
};

#endif
