#include "square.h"

Square::Square(double side) :_side(side) {}

const double Square::area()
{
	return _side * _side;
}