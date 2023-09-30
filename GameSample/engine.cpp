#include "engine.h"

engine::engine() {          // Конструктор
 // Инициализация игровой доски в конструкторе
}
 
void engine::run()          // Функция run() класса "engine"
{
	bool xMove = true;        // Ходит ли игрок X или O
	coordinate move;          // Координата хода
	while (!gameOver()) {       
		if (xMove) {      // Ходит ли игрок X
			move = xPlayer.Move_(board_);
		}
		else {
			move = oPlayer.Move_(board_);
		}
		xMove = !xMove;
		board.DoMove(move);     // Запись хода игрока(X/O) на доску
	}
}

bool engine::gameOver() const       // Функция gameOver() класса "engine"
{
	return false;
}
