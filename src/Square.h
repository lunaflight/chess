#ifndef SQUARE_H
#define SQUARE_H

#include "Piece.h"
#include <memory>

class Square {
public:
    Square();

    std::shared_ptr<Square> getLeft();
    std::shared_ptr<Square> getRight();
    std::shared_ptr<Square> getUp();
    std::shared_ptr<Square> getDown();
    void setLeft(std::shared_ptr<Square> left);
    void setRight(std::shared_ptr<Square> right);
    void setUp(std::shared_ptr<Square> up);
    void setDown(std::shared_ptr<Square> down);
    friend std::ostream& operator<<(std::ostream& os, const Square& square);
private:
    std::unique_ptr<Piece> piece;
    std::shared_ptr<Square> left;
    std::shared_ptr<Square> right;
    std::shared_ptr<Square> up;
    std::shared_ptr<Square> down;
};

#endif
