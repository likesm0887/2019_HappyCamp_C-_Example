#include <gtest/gtest.h>
#include "../src/triangle.h"
#include "../src/triangle_factory.h"
int main(int argc, char ** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


 TEST(Triangle2, TriangleNormal)
 {
	 Triangle *t = new Triangle(3, 4, 5);
	 ASSERT_TRUE(t->isTriangle(3,4,5));
	
 }
 TEST(Triangle2, TriangleIllegal)
 {
	 ASSERT_ANY_THROW(new Triangle(0, 6, 5));
 }

 TEST(Triangle2, TriangCreateleIllegal)
 {
	 TriangleFactory *tf = new TriangleFactory();
	 ASSERT_EQ(nullptr,tf->create(0, 4, 5));

 }
 
 TEST(Triangle2, TriangCreateNormal)
 {
	 TriangleFactory *tf = new TriangleFactory();
	 ASSERT_EQ(3, tf->create(3, 4, 5)->getSideA());
 }




