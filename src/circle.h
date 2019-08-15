#pragma once
#include"Shape.h"
class Circle : public Shape
{
public:
	Circle(double r);
	const double area();

private:
	double _r;
};
