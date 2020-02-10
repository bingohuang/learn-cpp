//
// Created by BingoHuang on 2020/2/10.
//

#include <gtest/gtest.h>
#include <numeric>
#include <vector>

GTEST_API_ int main(int argc, char ** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(sizeof_test, t1) {
    EXPECT_EQ(1, sizeof(char));
    EXPECT_EQ(4, sizeof(int));
    EXPECT_EQ(2, sizeof(short int));
    EXPECT_EQ(8, sizeof(long int));
    EXPECT_EQ(4, sizeof(float));
    EXPECT_EQ(8, sizeof(double));
    EXPECT_EQ(4, sizeof(wchar_t));
}

// 测试集为 MyTest，测试案例为 Sum
TEST(vector_test, Sum)
{
    std::vector<int> vec{1, 2, 3, 4, 5};
    int sum = std::accumulate(vec.begin(), vec.end(), 0);
    EXPECT_EQ(sum, 15);
}


int add(int a, int b) {
    return a + b;
}

TEST(add_test, t1) {
    EXPECT_EQ(3, add(1, 2));
}