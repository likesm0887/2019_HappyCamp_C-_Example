#include <gtest/gtest.h>
#include "../src/triangle.h"
#include "../src/square.h"
#include "../src/circle.h"
#include <vector>
using namespace std;
int main(int argc, char ** argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


TEST(Triangle, createTriangle)
{
	Triangle *triangle = new Triangle(5, 7, 6);
	ASSERT_EQ(5, triangle->getSideA());
}

TEST(Triangle, createIllegalTriangle)
{
	ASSERT_ANY_THROW(new Triangle(1, 2, 5));
}

TEST(Triangle, calculateArea)
{
	Triangle *triangle = new Triangle(3, 4, 5);
	ASSERT_NEAR(6, triangle->area(), 0.01);
}

TEST(ShapeTest, triangleInheritShape)
{
	Shape *triangle = new Triangle(3, 4, 5);
	ASSERT_NEAR(6, triangle->area(), 0.01);
}

TEST(ShapeTest, addShape)
{
	Shape *square = new Square(2);
	Shape *circle = new Circle(2);
	Shape *triangle = new Triangle(3, 4, 5);
	vector<Shape*> shapes;
	shapes.push_back(square);
	shapes.push_back(circle);
	shapes.push_back(triangle);
	ASSERT_EQ(3, shapes.size());
}

double calculateAllArea(vector<Shape*> shapes)
{
	vector<Shape*>::iterator it;
	double total = 0;
	for (it = shapes.begin(); it != shapes.end(); ++it)
	{
		total += (*it)->area();
	}
	return total;
}


TEST(ShapeTest, calculateShapesArea)
{
	Shape *square = new Square(2);
	Shape *circle = new Circle(2);
	Shape *triangle = new Triangle(3, 4, 5);
	vector<Shape*> shapes;
	shapes.push_back(square);
	shapes.push_back(circle);
	shapes.push_back(triangle);
	ASSERT_NEAR(22.56, calculateAllArea(shapes), 0.01);
}



