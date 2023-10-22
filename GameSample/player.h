#pragma once

#include "board.h"
#include "coordinate.h"

class Player {

public:
	Player(char symbol) : symbol(symbol) {} // Где symbol - символ игрока (X или O)	

	Coordinate Move(const Board&, char);    // Функция Move(board)
};
