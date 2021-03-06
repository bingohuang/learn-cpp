//
// Created by BingoHuang on 2020/2/11.
//

#include <gmock/gmock.h>

#include "FooMock.h"

using namespace seamless;
using namespace std;

TEST(FooTest, TestGetArbitraryString)
{
    string value = "Hello World!";
    MockFoo mockFoo;
    EXPECT_CALL(mockFoo, getArbitraryString())
            .Times(1)
            .WillOnce(testing::Return(value));
    string returnValue = mockFoo.getArbitraryString();
    cout << "Return Value: " << returnValue << endl;
}

TEST(FooTest, TestSetValues)
{
    MockFoo mockFoo;
    string value = "Hello World!";
    EXPECT_CALL(mockFoo, setValue(testing::_));
    mockFoo.setValue(value);
}

TEST(FooTest, TestSetDoubleValues)
{
    MockFoo mockFoo;
    EXPECT_CALL(mockFoo, setDoubleValues(testing::Eq(1), testing::Ge(1)));
    mockFoo.setDoubleValues(1, 1);
//    mockFoo.setDoubleValues(1, 0); //error
}

TEST(FooTest, TestDoAll) {
    MockFoo mockFoo;
    std::string* a = new std::string("yes");
    std::string* b = new std::string("no");
    cout << "a: " << &a << endl;
    cout << "b: " << &b << endl;
    cout << "a: " << *a << endl;
    cout << "b: " << *b << endl;
    EXPECT_CALL(mockFoo, getParameter(testing::_, testing::_)).Times(1).
        WillOnce(testing::DoAll(testing::Assign(&a, b), testing::Return(1)));

    int r = mockFoo.getParameter(a, b);
    cout << "a: " << &a << endl;
    cout << "b: " << &b << endl;
    cout << "a: " << *a << endl;
    cout << "b: " << *b << endl;
    cout << "Return Value: " << r << endl;
}

TEST(FooTest, TestSequences) {
    testing::Sequence s1, s2;
    MockFoo mockFoo;
    EXPECT_CALL(mockFoo, getSize()).InSequence(s1, s2).WillOnce(testing::Return(1));
    EXPECT_CALL(mockFoo, getValue()).InSequence(s2).WillOnce(testing::Return(
            string("Hello World!")));
    cout << "\nFirst:\t" << mockFoo.getSize() << endl;
    cout << "Second:\t" << mockFoo.getValue() << endl;
//    cout << "\nSecond:\t" << mockFoo.getValue() << endl;
//    cout << "First:\t" << mockFoo.getSize() << endl;
}

TEST(FooTest, TestSequences2) {
    testing::InSequence dummy;
    MockFoo mockFoo;
    EXPECT_CALL(mockFoo, getSize()).WillOnce(testing::Return(1));
    EXPECT_CALL(mockFoo, getValue()).WillOnce(testing::Return(string("Hello World")));

    cout << "\nFirst:\t" << mockFoo.getSize() << endl;
    cout << "Second:\t" << mockFoo.getValue() << endl;
//    cout << "\nSecond:\t" << mockFoo.getValue() << endl;
//    cout << "First:\t" << mockFoo.getSize() << endl;
}