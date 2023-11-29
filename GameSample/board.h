/**
 * \file board.h
 * \brief Заголовочный файл для класса Board в проекте TicTacToe.
 *
 * Этот файл содержит описание класса Board, представляющего игровое поле крестиков-ноликов.
 */

#pragma once
#include "coordinate.h"

 /**
  * \class Board
  * \brief Класс, представляющий игровое поле крестиков-ноликов.
  */

class Board {

public:

    /**
     * \brief Конструктор по умолчанию для создания объекта игрового поля.
     */
	Board();

        /**
         * \brief Конструктор копирования для создания копии игрового поля.
         * \param other - Ссылка на объект, который нужно скопировать.
         */
        Board(const Board& other);

        /**
         * \brief Оператор присваивания для копирования данных из другого объекта игрового поля. (Оператор копирования)
         * \param other - Ссылка на объект, из которого нужно скопировать данные.
         * \return Ссылка на текущий объект после присваивания.
         */
        Board& operator=(const Board& other);

        /**
         * \brief Оператор сравнения для проверки равенства двух игровых полей.
         * \param other - Ссылка на объект, с которым нужно сравнить текущее игровое поле.
         * \return true, если игровые поля равны, в противном случае - false.
         */
        bool operator==(const Board& other) const;

        /**
         * \brief Оператор ввода из потока для считывания данных игрового поля.
         * \param is - Ссылка на входной поток.
         * \param board - Ссылка на объект игрового поля, в который будут считаны данные.
         * \return Ссылка на входной поток после считывания.
         */
        friend std::istream& operator>>(std::istream& is, Board& board);

        /**
         * \brief Оператор вывода в поток для вывода данных игрового поля.
         * \param os - Ссылка на выходной поток.
         * \param board - Ссылка на объект игрового поля, который нужно вывести.
         * \return Ссылка на выходной поток после вывода.
         */
        friend std::ostream& operator<<(std::ostream& os, const Board& board);

    /**
     * \brief Функция для совершения хода игрока на игровом поле.
     * \param coord - Координаты хода на игровом поле.
     * \param playerSymbol - Символ игрока (X или O).
     */
	void DoMove(Coordinate, char);   // Функция для совершения хода

	friend class engine;

    /**
     * \brief Получение символа на игровом поле по заданным координатам.
     * \param x - Координаты на игровом поле.
     * \return Символ на указанных координатах.
     */
	char GetSymbol(Coordinate x) const;
}


private:
	char gameBoard[3][3];
    ///< Массив, представляющий игровое поле 3x3.
};