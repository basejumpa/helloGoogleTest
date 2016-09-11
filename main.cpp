#include <gtest/gtest.h>
#include <gmock/gmock.h>

class TimesTwo {
	public:
	char timesTwo(char u){
		return 2*u;
	}
};

class MockTimesTwo : public TimesTwo {
	public:
	MOCK_METHOD1(timesTwo, char(char u));
};

TEST(someTestCasePassing, someTestPassing){
	TimesTwo a;
	EXPECT_EQ(2, a.timesTwo(1));
		
	MockTimesTwo b;
	EXPECT_CALL(b, timesTwo(1)).Times(1);
	EXPECT_EQ(0, b.timesTwo(1));
}

int main(int argc, char **argv)
{
	::testing::InitGoogleMock(&argc, argv);
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
