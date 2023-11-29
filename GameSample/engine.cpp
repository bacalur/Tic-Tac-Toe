#include "engine.h"
#include "board.h"
#include <iostream>
#include <algorithm>
#include <random>
#include <sstream>

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
		Coordinate move; 
		
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
    for (int i = 0; i < 3; i++) {
        if (board_.GetSymbol(Coordinate(i, 0)) == board_.GetSymbol(Coordinate(i, 1)) &&
            board_.GetSymbol(Coordinate(i, 1)) == board_.GetSymbol(Coordinate(i, 2)) &&
            board_.GetSymbol(Coordinate(i, 0)) != ' ') {
            return true;
        }
        if (board_.GetSymbol(Coordinate(0, i)) == board_.GetSymbol(Coordinate(1, i)) &&
            board_.GetSymbol(Coordinate(1, i)) == board_.GetSymbol(Coordinate(2, i)) &&
            board_.GetSymbol(Coordinate(0, i)) != ' ') {
            return true;
        }
    }

    if (board_.GetSymbol(Coordinate(0, 0)) == board_.GetSymbol(Coordinate(1, 1)) &&
        board_.GetSymbol(Coordinate(1, 1)) == board_.GetSymbol(Coordinate(2, 2)) &&
        board_.GetSymbol(Coordinate(0, 0)) != ' ') {
        return true;
    }

    if (board_.GetSymbol(Coordinate(0, 2)) == board_.GetSymbol(Coordinate(1, 1)) &&
        board_.GetSymbol(Coordinate(1, 1)) == board_.GetSymbol(Coordinate(2, 0)) &&
        board_.GetSymbol(Coordinate(0, 2)) != ' ') {
        return true;
    }
	
    // Проверка на ничью

	return std::all_of(board_.gameBoard.begin(), board_.gameBoard.end(), [](const std::vector<char>& row) {
        return std::none_of(row.begin(), row.end(), [](char symbol) { return symbol == ' '; });
    });

   /*     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board_.GetSymbol(Coordinate(i, j)) == ' ') {
                return false; // Есть пустая клетка, игра продолжается
            }
        }
    }
    return false;   // Игра продолжается
    */
}

std::string engine::getBoard() const {
    std::ostringstream os;
    os << board_;
    return os.str();
}

void engine::reset() {
    board_ = Board();
}
