#pragma once
#include <math.h>
#include <iostream>
#include <string>
#include "shape.h"
using namespace std;
class Triangle : public Shape
{
public:
	Triangle() {};

	Triangle(int a, int b, int c) :_sideA(a), _sideB(b), _sideC(c) {

		if (!isTriangle(a, b, c))
		{
			throw std::string("illegal triangle");
		}
	}

	bool isTriangle(int a, int b, int c) {
		if ((a + b > c) && (a + c > b) && (b + c > a))
			return true;
		else
			return false;
	}

	int getSideA() {
		return _sideA;
	}

	const double area()
	{
		int const p = calculatePerimeter() / 2;
		return sqrt((p*(p - _sideA)*(p - _sideB)*(p - _sideC)));
	}
private:
	const double calculatePerimeter()
	{
		return _sideA + _sideB + _sideC;
	}
	int _sideA;
	int _sideB;
	int _sideC;
};

