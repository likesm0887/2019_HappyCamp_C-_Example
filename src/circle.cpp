#include "circle.h"

Circle::Circle(double r) :_r(r) {}

const double Circle::area()
{
	const double PI = 3.14;
	return PI * _r*_r;
}