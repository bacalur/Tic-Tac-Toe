#include "engine.h"

engine::engine() {          // Конструктор
 // Инициализация игровой доски в конструкторе
}
 
void engine::run()          // Функция run() класса "engine"
{
	bool xMove = true;        // Ходит ли игрок X или O
	coordinate move;          // Координата хода
	char currentPlayerSymbol = 'X';       // Начинает игрок с крестиками
	
	while (!gameOver()) {       
		if (xMove) {      // Ходит ли игрок X
			std::cout << "Ход игрока X:" << std::endl;
			move = xPlayer.Move_(board_, currentPlayerSymbol);
		}
		else {
			std::cout << "Ход игрока O:" << std::endl;
                        move = oPlayer.Move(board_, currentPlayerSymbol);
		}
		xMove = !xMove;
		board.DoMove(move, currentPlayerSymbol);       // Запись хода игрока(X/O) на доску
                currentPlayerSymbol = (currentPlayerSymbol == 'X') ? 'O' : 'X';    // Смена игрока
	}
}

bool engine::gameOver() const       // Функция gameOver() класса "engine"
{
    // Проверка на победу	

    // Проверка на ничью
	
    return false;   // Игра продолжается
}
