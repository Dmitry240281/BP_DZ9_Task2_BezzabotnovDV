#pragma once
#include "Figure.h"
#include "Quadrate.h"

// �������������� - ������� ������� �����, ���� �� ����� 90 �������� �� ������� �����
class Parallelogram : public Quadrate {
public:
    Parallelogram(double a, double b, double A, double B);
    void print();
};