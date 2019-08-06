#pragma once

#include <math.h>
#include <iostream>
#include <string>
#include "triangle.h"
using namespace std;
class TriangleFactory
{
public:
	TriangleFactory() {};

	Triangle* create(int a, int b, int c)
	{
		
		Triangle *check = new Triangle();
		if (check->isTriangle(a, b, c))
		{
			return new Triangle(a, b, c);
		}
		else
		{
			return nullptr;
		}
		
		
	}
};
