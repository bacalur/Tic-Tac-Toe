#pragma once

class board {

public:
        board(); // Конструктор, инициализирующий игровое поле
	void DoMove(Coordinate);  // Функция для совершения хода

	friend class engine;

private:
        char gameBoard[3][3]; // Массив - Игровое поле 3x3
};
