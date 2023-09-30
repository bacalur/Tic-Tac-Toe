#include "board.h"
#include "coordinate.h"

board::board(){            // конструктор
  // Инициализация игрового поля пробелами - пустыми клетками
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            gameBoard[i][j] = ' ';
}

