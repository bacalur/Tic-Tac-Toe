#pragma once
#include "coordinate.h"

class Board {

public:
	Board(); // Конструктор, инициализирующий игровое поле (по умолчанию)

        Board(const Board& other);    // Конструктор копирования

        Board& operator=(const Board& other);    // Оператор копирования

        bool operator==(const Board& other) const;    // Оператор сравнения

        friend std::istream& operator>>(std::istream& is, Board& board);   // Оператор ввода

        friend std::ostream& operator<<(std::ostream& os, const Board& board);   // Оператор вывода

	void DoMove(Coordinate, char);   // Функция для совершения хода

	friend class engine;

	char GetSymbol(Coordinate x) const;

	Board(const Board& other) {
        // копия игрового поля (gameBoard) из другого объекта
        for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            gameBoard[i][j] = other.gameBoard[i][j];
        }
        }
}


private:
	char gameBoard[3][3]; // Массив - Игровое поле 3x3
};
