#pragma once
#include "Figure.h"
#include "Square.h"

// ������� - ��� ������� �����, ��� ���� �� 90 ��������
class Square : public Quadrate {
public:
    Square(double a, double A = 90);
    void print();
};