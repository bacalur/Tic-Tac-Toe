#pragma once

#include "board.h"
#include "coordinate.h"

class Player {

public:
	Coordinate Move(const Board&, char);    // Функция Move(board)
};
