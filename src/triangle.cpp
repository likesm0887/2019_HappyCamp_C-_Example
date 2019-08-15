#include "triangle.h"

Triangle::Triangle(int a, int b, int c) :_sideA(a), _sideB(b), _sideC(c) {

	if (!isTriangle(a, b, c))
	{
		throw std::string("illegal triangle");
	}
}

int Triangle::getSideA() {
	return _sideA;
}

const double Triangle::area()
{
	int const p = calculatePerimeter() / 2;
	return sqrt((p*(p - _sideA)*(p - _sideB)*(p - _sideC)));
}

bool Triangle::isTriangle(int a, int b, int c) {
	if ((a + b > c) && (a + c > b) && (b + c > a))
		return true;
	else
		return false;
}

const double Triangle::calculatePerimeter()
{
	return _sideA + _sideB + _sideC;
}