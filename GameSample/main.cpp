#include "board.h"
#include "engine.h"
#include "player.h"

int main() {
    // Создаю объекты
    board gameBoard;
    engine gameEngine;
    player xPlayer;
    player oPlayer;

    // Запуск игры
    gameEngine.run();

    return 0;
}
