/**
 * \file engine.h
 * \brief Заголовочный файл для класса engine в проекте TicTacToe.
 *
 * Этот файл содержит описание класса engine, представляющего игровой движок для крестиков-ноликов.
 */

#pragma once

#include "board.h"
#include "player.h"
#include <iostream>

 /**
  * \class engine
  * \brief Класс, представляющий игровой движок для крестиков-ноликов.
  */
class engine {
public:

    /**
     * \brief Конструктор для создания объекта игрового движка.
     */
    engine();

    /**
     * \brief Функция для запуска игры с использованием текущего игрового движка.
     */
    void run();

    /**
     * \brief Функция для проверки завершения игры.
     * \return true, если игра завершена, в противном случае - false.
     */
    bool gameOver() const;

    /**
     * \brief Метод для получения текущего состояния доски в виде строки.
     * \return Строка, представляющая текущее состояние доски.
     */
    std::string getBoard() const;

    /**
     * \brief Метод для сброса игры, очистки доски.
     */
    void reset();

private:
    Board board_;    ///< Доска
    Player xPlayer;  ///< Игрок X 
    Player oPlayer;  ///< Игрок O
};
