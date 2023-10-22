#pragma once

class Coordinate {
public:
    int x; // Координата по горизонтали
    int y; // Координата по вертикали

    Coordinate(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}    // Конструктор "Coordinate" со значениями x и y
    
    Coordinate(const Coordinate& other) : x(other.x), y(other.y) {}    // Oператор копирования

    bool operator==(const Coordinate& other) const {    // Оператор сравненния
    return (x == other.x) && (y == other.y);
    }

    Coordinate() = default;
};
