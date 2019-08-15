#pragma once
#include <math.h>
#include <iostream>
#include <string>
#include "shape.h"
using namespace std;
class Triangle : public Shape
{
public:
	Triangle(int a, int b, int c);
	int getSideA();
	const double area();

private:

	bool isTriangle(int a, int b, int c);
	const double calculatePerimeter();

	int _sideA;
	int _sideB;
	int _sideC;
};

