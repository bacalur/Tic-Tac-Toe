#pragma once
#include "coordinate.h"

class Board {

public:
	Board(); // Конструктор, инициализирующий игровое поле
	void DoMove(Coordinate, char);  // Функция для совершения хода

	friend class engine;

	char GetSymbol(Coordinate x) const;

private:
	char gameBoard[3][3]; // Массив - Игровое поле 3x3
};
