#include <memory>
#include "Piece.h"
#include "Color.h"
#include "../Square.h"

Piece::Piece(Color color, std::shared_ptr<Square> square) : color(color), square(square) {}
