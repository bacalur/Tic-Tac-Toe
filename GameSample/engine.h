#pragma once

#include "board.h"
#include "player.h"
#include <iostream>

class engine {
public:
    engine();    // Конструктор
    void run();  // Функция - Запуск игры
    bool gameOver() const;
    std::string getBoard() const;  // Метод для получения текущего состояния доски
    void reset();  // Метод для сброса игры

private:
    Board board_;    // Доска
    Player xPlayer;  // Игрок X 
    Player oPlayer;  // Игрок O
};
