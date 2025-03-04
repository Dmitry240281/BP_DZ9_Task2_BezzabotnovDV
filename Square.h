#pragma once
#include "Figure.h"
#include "Square.h"

// Крабрат - все стороны равны, все углы по 90 градусов
class Square : public Quadrate {
public:
    Square(double a, double A = 90);
    void print();
};