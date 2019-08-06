#pragma once
#include <math.h>
#include <iostream>
#include <string>
using namespace std;
class Triangle
{
public:
	Triangle() {};
	
	Triangle(int a , int b ,int c ) :_sideA(a),_sideB(b), _sideC(c)
	{

		if (!isTriangle(a,b,c))
		{
			throw std::string("illegal triangle");
		}
	}
	//判斷可否構成三角形
	bool isTriangle(int a, int b, int c) 
	{
		if ((a + b > c) && (a + c > b) && (b + c > a))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	int getSideA()
	{
		return _sideA;
	}
private:
	int _sideA;
	int _sideB;
	int _sideC;
};

