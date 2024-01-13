#include <stdint.h>

struct Point {
    float x, y;
};

enum class FigureType
{
    Circle,
    Ellipse,
    Line,
    Rectangle,
    Square
};

struct FigureColor {
    uint8_t r, g, b;
};