#pragma once

#include <iostream>

class Coordinate {
public:
    int x; // Координата по горизонтали
    int y; // Координата по вертикали

    Coordinate(int xCoord, int yCoord);
    Coordinate(const Coordinate& other);

    bool operator==(const Coordinate& other) const;

    // Операторы ввода и вывода
    friend std::ostream& operator<<(std::ostream& os, const Coordinate& coord);
    friend std::istream& operator>>(std::istream& is, Coordinate& coord);

    Coordinate() = default;
};
