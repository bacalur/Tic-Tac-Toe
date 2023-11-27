#include "board.h"
#include "engine.h"
#include "player.h"
#include <iostream>

int main() {
    // Создаю объекты
    board gameBoard;
    engine gameEngine;
    Player xPlayer('X');
    Player oPlayer('O');

    char playAgain;
    do {
        // Запуск игры
        gameEngine.run();

        // Вывод текущего состояния доски
        std::cout << "Игровая доска после завершения игры:\n";
        std::cout << gameEngine.getBoard();

        // Предложение сыграть еще раз
        std::cout << "Хочешь сыграть еще раз? (y/n): ";
        std::cin >> playAgain;

        // Сброс игровой доски для новой игры
        gameEngine.reset();
    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}
