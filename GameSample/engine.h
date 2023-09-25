#pragma once

#include "board.h"
#include "player.h"

class engine {
public:
    engine(); // Конструктор
    void run(); // Запуск игры

private:
    board board_;
    player xPlayer;
    player oPlayer;
};
