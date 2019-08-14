#pragma once
#include"Shape.h"
class Circle : public Shape
{
public:
	Circle(double r) :_r(r) {}

	const double area()
	{
		const double PI = 3.14;
		return PI * _r*_r;
	}

private:
	double _r;
};
