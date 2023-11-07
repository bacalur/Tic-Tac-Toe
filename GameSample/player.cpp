#include "player.h"
#include <cstdlib> //    Для функции
#include <random>  //    rand
#include <iostream>
#include <algorithm>

Coordinate Player::Move(const Board& gameBoard, char playerSymbol) {    // Функция Move(), "const board& gameBoard" - Ссылка не создает копию объекта, а работает с оригиналом
    // Логика выбора хода для игрока, случайный выбор
    std::vector<Coordinate> availableMoves;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (gameBoard.GetSymbol(Coordinate(i, j)) == ' ') {
                availableMoves.push_back(Coordinate(i, j));
            }
        }
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(0, availableMoves.size() - 1);

    return availableMoves[distribution(gen)];
}
    /*
        int x, y;    // координаты 
    do {
        x = std::rand() % 3;
        y = std::rand() % 3;
    } while (gameBoard.GetSymbol(Coordinate(x,y)) != ' ');
    return Coordinate(x, y);
}

bool Player::operator==(const Player& other) const {     // Оператор сравнения
    return symbol == other.symbol;
}*/
