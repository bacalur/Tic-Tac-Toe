#include "board.h"
#include "coordinate.h"

Board::Board() {            // конструктор по умолчанию
	// Инициализация игрового поля пробелами - пустыми клетками
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			gameBoard[i][j] = ' ';
		}
	}
}

Board::Board(const Board& other) {
    // Конструктор копирования
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            gameBoard[i][j] = other.gameBoard[i][j];
        }
    }
}

Board& Board::operator=(const Board& other) {
    // Оператор копирования
    if (this != &other) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                gameBoard[i][j] = other.gameBoard[i][j];
            }
        }
    }
    return *this;
}

bool Board::operator==(const Board& other) const {
    // Оператор сравнения
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (gameBoard[i][j] != other.gameBoard[i][j]) {
                return false;
            }
        }
    }
    return true;
}

std::istream& operator>>(std::istream& is, Board& board) {
    // Оператор ввода
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            is >> board.gameBoard[i][j];
        }
    }
    return is;
}

std::ostream& operator<<(std::ostream& os, const Board& board) {
    // Оператор вывода
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            os << board.gameBoard[i][j] << ' ';
        }
        os << '\n';
    }
    return os;
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
