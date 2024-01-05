#include <iostream>

#include "Square.h"

Square::Square() : piece(nullptr), left(nullptr), right(nullptr), up(nullptr), down(nullptr) {}

std::shared_ptr<Square> Square::getLeft() {
    return left;
}

std::shared_ptr<Square> Square::getRight() {
    return right;
}

std::shared_ptr<Square> Square::getUp() {
    return up;
}

std::shared_ptr<Square> Square::getDown() {
    return down;
}

void Square::setLeft(std::shared_ptr<Square> left) {
    this->left = left;
}

void Square::setRight(std::shared_ptr<Square> right) {
    this->right = right;
}

void Square::setUp(std::shared_ptr<Square> up) {
    this->up = up;
}

void Square::setDown(std::shared_ptr<Square> down) {
    this->down = down;
}

std::ostream& operator<<(std::ostream& os, const Square& square) {
    if (square.piece) {
        // os << *(square.piece);
    } else {
        os << "X";
    }
    return os;
}
