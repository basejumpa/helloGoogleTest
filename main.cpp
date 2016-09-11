#include <gtest/gtest.h>

TEST(someTestCasePassing, someTestPassing){
	EXPECT_EQ(1, 1);
	EXPECT_EQ(2, 2);
}

TEST(someTestCaseFailing, someTestFailing){
	EXPECT_EQ(1, 0);
	EXPECT_EQ(2, 0);
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
