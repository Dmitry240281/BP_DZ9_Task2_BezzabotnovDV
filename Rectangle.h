#pragma once
#include "Figure.h"
#include "Quadrate.h"

// ������������� (������� ������� �����, ���� = 90)
class Rectangle : public Quadrate {
public:
    Rectangle(double a, double b, double A=90);
    void print();
};