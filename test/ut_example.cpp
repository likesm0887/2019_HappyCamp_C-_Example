#include <gtest/gtest.h>
#include "../src/triangle.h"
int main(int argc, char ** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


 TEST(Triangle, createTriangle)
 {
	 Triangle *triangle = new Triangle(5,7,6);
	 ASSERT_EQ(5,triangle->getSideA());
 }

 TEST(Triangle, createIllegalTriangle)
 {
	// Triangle *triangle = new Triangle(1, 2, 5);
	// ASSERT_FALSE(triangle->isTriangle(1,2,5));
	 ASSERT_ANY_THROW(new Triangle(1, 2, 5));
 }

 

 



