/**
 * \file player.h
 * \brief Заголовочный файл для класса Player в проекте TicTacToe.
 *
 * Этот файл содержит описание класса Player, представляющего игрока в игре крестиков-ноликов.
 */

#pragma once

#include "board.h"
#include "coordinate.h"
#include <iostream>
#include <vector>

 /**
  * \class Player
  * \brief Класс, представляющий игрока в игре Крестики-Нолики.
  */

class Player {

public:

	Player() : symbol(' ') {}

	/**
	 * \brief Конструктор для создания объекта игрока с заданным символом.
	 * \param symbol - Символ игрока (X или O).
	 */
	Player(char symbol) : symbol(symbol) {}

	/**
	* \brief Конструктор копирования для создания копии игрока.
	* \param other - Ссылка на объект, который нужно скопировать.
	*/
	Player(const Player& other) : symbol(other.symbol) {}

	/**
	 * \brief Оператор сравнения для проверки равенства двух игроков.
	 * \param other - Ссылка на объект, с которым нужно сравнить текущего игрока.
	 * \return true, если игроки равны, в противном случае - false.
	 */
	bool operator==(const Player& other) const {}

	/**
	 * \brief Оператор вывода в поток для вывода данных об игроке.
	 * \param os - Ссылка на выходной поток.
 	 * \param player - Ссылка на объект игрока, который нужно вывести.
     * \return Ссылка на выходной поток после вывода.
	 */
	friend std::ostream& operator<<(std::ostream& os, const Player& player) {
	    os << "Player: " << player.symbol;
	    return os;
	}

	    /**
         * \brief Оператор ввода из потока для считывания данных об игроке.
		 * \param is - Ссылка на входной поток.
	     * \param player - Ссылка на объект игрока, в который будут считаны данные.
		 * \return Ссылка на входной поток после считывания.
	     */
        friend std::istream& operator>>(std::istream& is, Player& player) {
        is >> player.symbol;
        return is;
        }

	/**
	 * \brief Функция для определения хода игрока на игровом поле.
	 * \param gameBoard - Ссылка на объект игрового поля.
	 * \param playerSymbol - Символ текущего игрока (X или O).
	 * \return Координаты выбранного хода.
	 */
	Coordinate Move(const Board& gameBoard, char playerSymbol);

private:
    char symbol; ///< Символ игрока (X или O).
};
