#pragma once
#include "Figure.h"
#include "Quadrate.h"

//����(��� ������� �����, ���� A, C � B, D ������� �����).
class Rhombus : public Quadrate {
public:
    Rhombus(double a, double A, double B);
    void print();
};