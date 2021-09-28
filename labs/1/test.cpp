#include "pch.h"
#include "..\..\..\..\source\repos\ConsoleApplication1\ConsoleApplication1\DLIST.h"
#include <iostream>

TEST(DecartConstructor, DefaultConstructor) {
	p2::DecartList DL;
	ASSERT_EQ(1, DL.getN());
}

TEST(Constructor, InitConstructor) {
	p2::DecartList DL2(3);
	ASSERT_EQ(3, DL2.getN());

	p2::DecartList DL21(-1);
	ASSERT_EQ(-1, DL21.getN());

	p2::DecartList DL22(0);
	ASSERT_EQ(0, DL22.getN());
}

TEST(Methods, Setter) {
	p2::DecartList DL3;
	DL3.setN(3);
	ASSERT_EQ(3, DL3.getN());

	DL3.setN(-1);
	ASSERT_EQ(-1, DL3.getN());

	DL3.setN(0);
	ASSERT_EQ(0, DL3.getN());
}

TEST(Methods, OtherMethods) {
	double err = 0.000001;
	p2::DecartList DL4(1);

	EXPECT_NEAR(DL4.chord(), 0.707107, err);
	EXPECT_NEAR(DL4.polar(1), 0.603341, err);
	EXPECT_NEAR(DL4.curvatureR(), 0.0883883, err);
	EXPECT_NEAR(DL4.curvatureN(), 0.5, err);
	EXPECT_NEAR(DL4.area(), 0.166667, err);
	EXPECT_NEAR(DL4.highD(), 0.69197, err);
	EXPECT_NEAR(DL4.distanceD(),0.408248, err);

	DL4.setN(-1);

	EXPECT_NEAR(DL4.chord(), -0.707107, err);
	EXPECT_NEAR(DL4.polar(1), -0.603341, err);
	EXPECT_NEAR(DL4.curvatureR(), -0.0883883, err);
	EXPECT_NEAR(DL4.curvatureN(), -0.5, err);
	EXPECT_NEAR(DL4.area(), 0.166667, err);
	EXPECT_NEAR(DL4.highD(), -0.69197, err);
	EXPECT_NEAR(DL4.distanceD(), -0.408248, err);

	DL4.setN(0);

	EXPECT_NEAR(DL4.chord(), 0, err);
	EXPECT_NEAR(DL4.polar(1), 0, err);
	EXPECT_NEAR(DL4.curvatureR(), 0, err);
	EXPECT_NEAR(DL4.curvatureN(), 0, err);
	EXPECT_NEAR(DL4.area(), 0, err);
	EXPECT_NEAR(DL4.highD(), 0, err);
	EXPECT_NEAR(DL4.distanceD(), 0, err);

}

int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
