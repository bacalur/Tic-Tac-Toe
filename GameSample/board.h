#pragma once

class board {

public:
        board(); // Конструктор, инициализирующий игровое поле
	void DoMove(coordinate);

	friend class engine;

private:
        char gameBoard[3][3]; // Игровое поле 3x3
};
