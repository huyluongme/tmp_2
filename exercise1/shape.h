#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
private:
public:
    Shape() {};
    ~Shape() {};
    virtual double area() = 0;
};
#endif