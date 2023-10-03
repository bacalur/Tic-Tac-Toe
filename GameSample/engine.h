#pragma once

#include "board.h"
#include "player.h"

class engine {
public:
    engine();    // Конструктор
    void run();  // Функция - Запуск игры
    bool gameOver() const;

private:
    Board board_;    // Доска
    Player xPlayer;  // Игрок X 
    Player oPlayer;  // Игрок O
};
