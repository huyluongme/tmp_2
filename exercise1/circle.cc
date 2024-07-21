#include "circle.h"

#define M_PI 3.14159265358979323846

Circle::Circle(double r) : Shape(){
    this->radius = r;
}

Circle::~Circle() {}

double Circle::area(){
    return M_PI * this->radius * this->radius;
}