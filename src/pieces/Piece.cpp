#include <memory>
#include "Piece.h"

class Square;

Piece::Piece(std::shared_ptr<Square> square) : square(square) {}
