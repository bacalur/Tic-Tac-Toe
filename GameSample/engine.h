#pragma once

#include "board.h"
#include "player.h"

class engine {
public:
    engine();    // Конструктор
    void run();  // Функция - Запуск игры

private:
    board board_;    // Доска
    player xPlayer;  // Игрок X 
    player oPlayer;  // Игрок O
};
