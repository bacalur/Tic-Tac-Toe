/**
 * \file coordinate.h
 * \brief Заголовочный файл для класса Coordinate в проекте TicTacToe.
 *
 * Этот файл содержит описание класса Coordinate, представляющего координаты на игровом поле крестиков-ноликов.
 */

#pragma once

#include <iostream>

 /**
  * \class Coordinate
  * \brief Класс, представляющий координаты на игровом поле.
  */
class Coordinate {
public:
    int x; ///< Координата по горизонтали
    int y; ///< Координата по вертикали

    /**
     * \brief Конструктор для создания объекта координат с заданными значениями.
     * \param xCoord - Координата по горизонтали.
     * \param yCoord - Координата по вертикали.
     */
    Coordinate(int xCoord, int yCoord);

    /**
     * \brief Конструктор копирования для создания копии объекта координат.
     * \param other - Ссылка на объект, который нужно скопировать.
     */
    Coordinate(const Coordinate& other);

    /**
     * \brief Оператор сравнения для проверки равенства двух объектов координат.
     * \param other - Ссылка на объект, с которым нужно сравнить текущие координаты.
     * \return true, если координаты равны, в противном случае - false.
     */
    bool operator==(const Coordinate& other) const;

    /**
     * \brief Оператор вывода в поток для вывода данных координат.
     * \param os - Ссылка на выходной поток.
     * \param coord - Ссылка на объект координат, который нужно вывести.
     * \return Ссылка на выходной поток после вывода.
     */
    friend std::ostream& operator<<(std::ostream& os, const Coordinate& coord);

    /**
     * \brief Оператор ввода из потока для считывания данных координат.
     * \param is - Ссылка на входной поток.
     * \param coord - Ссылка на объект координат, в который будут считаны данные.
     * \return Ссылка на входной поток после считывания.
     */
    friend std::istream& operator>>(std::istream& is, Coordinate& coord);

    /**
     * \brief Конструктор по умолчанию для создания объекта координат.
     */
    Coordinate() = default;
};
