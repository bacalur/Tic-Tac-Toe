#pragma once

class board {

public:
        board(); // Конструктор, инициализирующий игровое поле
	void DoMove(coordinate);

	friend class engine;
};
