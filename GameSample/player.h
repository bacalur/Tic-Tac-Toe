#pragma once

#include "board.h"
#include "coordinate.h"

class Player {

public:
	Player(char symbol) : symbol(symbol) {} // Где symbol - символ игрока (X или O)	

	Player(const Player& other) : symbol(other.symbol) {}   // Оператор копирования

	// Операторы ввода и вывода
	bool operator==(const Player& other) const {    // Оператор сравнения
	    return symbol == other.symbol;
	}

	friend std::ostream& operator<<(std::ostream& os, const Player& player) {
	    os << "Player: " << player.symbol;
	    return os;
	}

        Player(const Player& other) : symbol(other.symbol) {}

friend std::istream& operator>>(std::istream& is, Player& player) {
    is >> player.symbol;
    return is;
}



	Coordinate Move(const Board&, char);    // Функция Move(board)
};
