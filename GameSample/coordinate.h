#pragma once

class Coordinate {
public:
    int x; // Координата по горизонтали
    int y; // Координата по вертикали

    Coordinate(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}    // Конструктор "Coordinate" со значениями x и y

    Coordinate(const Coordinate& other) : x(other.x), y(other.y) {}    // Конструктор копирования

    bool operator==(const Coordinate& other) const {    // Оператор сравненния
    return (x == other.x) && (y == other.y);
    }

    // Операторы ввода и вывода
    friend std::ostream& operator<<(std::ostream& os, const Coordinate& coord) {
    os << "(" << coord.x << ", " << coord.y << ")";
    return os;
    }

    friend std::istream& operator>>(std::istream& is, Coordinate& coord) {
    is >> coord.x >> coord.y;
    return is;
    }

    Coordinate() = default;
};
