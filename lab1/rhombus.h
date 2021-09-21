#ifndef RHOMBUS_H
#define RHOMBUS_H
#include "figure.h"
#include <iostream>

class Rhombus:public figure
{
public:
    Rhombus();
    Rhombus(std::istream&is);
    bool isit();
    void Print(std::ostream&os);
    size_t VertexesNumber();
    double Area();
    ~Rhombus();

private:
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    double x4;
    double y4;
};

#endif // RHOMBUS_H
