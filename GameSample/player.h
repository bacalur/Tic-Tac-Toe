#pragma once

#include "board.h"
#include "coordinate.h"

class Player {

public:
	Player(char symbol) : symbol(symbol) {} // Где symbol - символ игрока (X или O)	

	Player(const Player& other) : symbol(other.symbol) {}   // Оператор копирования

	Coordinate Move(const Board&, char);    // Функция Move(board)
};
