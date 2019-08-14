#pragma once
class Square :public Shape
{
public:
	Square(double side):_side(side){}

	const double area()
	{
		return _side * _side;
	}
private:
	double _side;
};
