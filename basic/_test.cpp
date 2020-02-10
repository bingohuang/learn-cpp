//
// Created by BingoHuang on 2020/2/10.
//

#include <iostream>
#include <gtest/gtest.h>

GTEST_API_ int main(int argc, char ** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(sizeof_test, c1) {
    EXPECT_EQ(1, sizeof(char));
    EXPECT_EQ(4, sizeof(int));
    EXPECT_EQ(2, sizeof(short int));
    EXPECT_EQ(8, sizeof(long int));
    EXPECT_EQ(4, sizeof(float));
    EXPECT_EQ(8, sizeof(double));
    EXPECT_EQ(4, sizeof(wchar_t));
}

int add(int a, int b) {
    return a + b;
}

TEST(sizeof_test, c2) {
    EXPECT_EQ(3, add(1, 2));
}