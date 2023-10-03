#include "board.h"
#include "coordinate.h"

Board::Board() {            // конструктор
	// Инициализация игрового поля пробелами - пустыми клетками
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			gameBoard[i][j] = ' ';
		}
	}
}

void Board::DoMove(Coordinate coord, char playerSymbol) {
	// Проверка на корректность координат и свободность клетки
	if (coord.x >= 0 && coord.x < 3 && coord.y >= 0 && coord.y < 3 && gameBoard[coord.x][coord.y] == ' ') {
		gameBoard[coord.x][coord.y] = playerSymbol;
	}
}

char Board::GetSymbol(Coordinate x) const {
	return gameBoard[x.x][x.y];
}
