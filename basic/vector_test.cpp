//
// Created by BingoHuang on 2020/2/10.
//

#include <gtest/gtest.h>
#include <vector>

class VectorTest : public testing::Test
{
protected:
protected:
    virtual void SetUp() override
    {
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);
    }
    virtual void TearDown() override {
        vec.clear();
    }

    std::vector<int> vec;
};

// 注意这里使用 TEST_F，而不是 TEST
TEST_F(VectorTest, PushBack)
{
    // 虽然这里修改了 vec，但对其它测试函数来说是不可见的
    vec.push_back(4);
    EXPECT_EQ(vec.size(), 4);
    EXPECT_EQ(vec.back(), 4);
}

TEST_F(VectorTest, Size)
{
    EXPECT_EQ(vec.size(), 3);
}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}