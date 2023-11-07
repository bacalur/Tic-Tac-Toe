#pragma once

#include "board.h"
#include "coordinate.h"
#include <iostream>
#include <vector>

class Player {

public:
	Player(char symbol) : symbol(symbol) {} // Где symbol - символ игрока (X или O)	
	Player(const Player& other) : symbol(other.symbol) {   // Оператор копирования
		 return symbol == other.symbol;
	}

	// Операторы ввода и вывода
	bool operator==(const Player& other) const {}    // Оператор сравнения

	friend std::ostream& operator<<(std::ostream& os, const Player& player) {
	    os << "Player: " << player.symbol;
	    return os;
	}

        friend std::istream& operator>>(std::istream& is, Player& player) {
        is >> player.symbol;
        return is;
        }

	Coordinate Move(const Board&, char);    // Функция Move(board)

private:
    char symbol;
};
