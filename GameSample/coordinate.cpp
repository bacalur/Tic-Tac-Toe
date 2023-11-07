#include "coordinate.h"

Coordinate::Coordinate(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}

Coordinate::Coordinate(const Coordinate& other) : x(other.x), y(other.y) {}

bool Coordinate::operator==(const Coordinate& other) const {
    return (x == other.x) && (y == other.y);
}

std::ostream& operator<<(std::ostream& os, const Coordinate& coord) {
    os << "(" << coord.x << ", " << coord.y << ")";
    return os;
}

std::istream& operator>>(std::istream& is, Coordinate& coord) {
    is >> coord.x >> coord.y;
    return is;
}
