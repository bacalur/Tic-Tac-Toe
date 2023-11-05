#include "engine.h"
#include <iostream>

engine::engine() {          // Конструктор
    board_ = Board();       // Создание объекта доски
    xPlayer = Player('X');  // Создание игрока X
    oPlayer = Player('O');  // Создание игрока O
}
 
void engine::run()          // Функция run() класса "engine"
{
	bool xMove = true;        // Ходит ли игрок X или O
	Coordinate move;          // Координата хода
	char currentPlayerSymbol = 'X';       // Начинает игрок с крестиками
	
	while (!gameOver()) {       
		if (xMove) {      // Ходит ли игрок X
			std::cout << "Ход игрока X:" << std::endl;
			move = xPlayer.Move(board_, currentPlayerSymbol);
			// Coordinate move = xPlayer.Move(board_, currentPlayerSymbol);
                        // board_.DoMove(move, currentPlayerSymbol); // Запись хода игрока (X/O) на доску
		}
		else {
			std::cout << "Ход игрока O:" << std::endl;
                        move = oPlayer.Move(board_, currentPlayerSymbol);
			// Coordinate move = oPlayer.Move(board_, currentPlayerSymbol);
                        // board_.DoMove(move, currentPlayerSymbol);
		}
		xMove = !xMove;
		board_.DoMove(move, currentPlayerSymbol);       // Запись хода игрока(X/O) на доску
                currentPlayerSymbol = (currentPlayerSymbol == 'X') ? 'O' : 'X';    // Смена игрока
	}
}

bool engine::gameOver() const       // Функция gameOver() класса "engine"
{
    // Проверка на победу	

    // Проверка на ничью
	
    return false;   // Игра продолжается
}
