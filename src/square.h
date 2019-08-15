#pragma once
#include"Shape.h"
class Square :public Shape
{
public:
	Square(double side);
	const double area();

private:
	double _side;
};
