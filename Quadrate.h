#pragma once
#include "Figure.h"

class Quadrate : public Figure {
protected:
    double a{}, b{}, c{}, d{}; // �������
    double A{}, B{}, C{}, D{}; // ����
public:
    Quadrate(double a, double b, double c, double d, double A, double B, double C, double D);
    void print_info();
};