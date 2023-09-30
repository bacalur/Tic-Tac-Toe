#include "player.h"
#include <cstdlib> //    Для функции rand

coordinate player::Move(const board& gameBoard, char playerSymbol) {    // Функция Move(), "const board& gameBoard" - Ссылка не создает копию объекта, а работает с оригиналом
    // Логика выбора хода для игрока, случайный выбор
    int x, y;    // координаты 
    do {
        x = std::rand() % 3;
        y = std::rand() % 3;
    } while (gameBoard.gameBoard[x][y] != ' ');
    return coordinate(x, y);
}
