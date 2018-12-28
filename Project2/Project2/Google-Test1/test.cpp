#include "pch.h"
#include "../Project2/Vector.h"
#include "../Project2/Stack.h"
#include "../Project2/Vector.cpp"



class VectorTest : public ::testing::Test
{
};

TEST_F(VectorTest, NazvanieTesta)
{
	Vector vector = Vector();
	vector.PushBack(3);
	int testedValue = vector.GetThis(0);
	int expect = 3;
	EXPECT_EQ(testedValue, expect);
}



TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}