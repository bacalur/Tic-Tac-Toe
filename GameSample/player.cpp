#include "player.h"
#include <cstdlib> //    Для функции rand

Coordinate Player::Move(const Board& gameBoard, char playerSymbol) {    // Функция Move(), "const board& gameBoard" - Ссылка не создает копию объекта, а работает с оригиналом
    // Логика выбора хода для игрока, случайный выбор
    int x, y;    // координаты 
    do {
        x = std::rand() % 3;
        y = std::rand() % 3;
    } while (gameBoard.GetSymbol(Coordinate(x,y)) != ' ');
    return Coordinate(x, y);
}
